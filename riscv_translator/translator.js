//Uses https://gitlab.com/luplab/rvcodecjs/
import { Instruction } from './core/Instruction.js';

//https://stackoverflow.com/questions/69099763/referenceerror-require-is-not-defined-in-es-module-scope-you-can-use-import-in
import { createRequire } from "module";
const require = createRequire(import.meta.url);
const fs = require('fs')


const args = process.argv;
if (args.length < 4) {
  console.error("Too few arguments. Usage: node translator.js <code_file.asm> <output_file.mem>")
  process.exit(-1);
}

//code file
const asmf = args[2];
//code/binary file output
const binf = args[3];

const branch_map = new Map();

//Returns instruction in byte format or empty string
// if line was either a comment or a label
function translate_ins(ins, pc) {
  if(ins.includes("#")) { //remove comment
    var splitins = ins.split("#");
    if(splitins[0].trim() == "") {
      //line is *just* a comment
      return "";
    }
    ins = splitins[0].trim();
  }

  if(ins.trim() == "" || ins.trim() == "\n") {
    //If line is empty, do nothing
    return "";
  }

  if(ins.includes(":")) { //Found label
    branch_map.set(ins.replace(":", ""), pc);
    return "";
  }

  //pseudo instructions
  if(/\bli\s/.test(ins)) { //ins contains li but nothing before like slli
    //li x, i = addi x, x0, i
    var reg = ins.replace("li ", "").trim().split(" ")[0].replace(",", "");
    var imm = ins.replace("li ", "").trim().split(" ")[1].trim();
    ins = "addi " + reg + ", x0, " + imm;
  }
  if(/\bj\s/.test(ins)) { //ins contains j but nothing before
    //j offset = beq x0, x0, offset
    ins = ins.replace("j ", "beq x0, x0, ");
  }

  if(ins.includes("beq") ||
     ins.includes("bne") ||
     ins.includes("blt") ||
     ins.includes("bge") ||
     ins.includes("bltu") ||
     ins.includes("bgeu")) { //Branch instruction
    var splitins = ins.split(",");
    var lastarg = splitins[splitins.length-1].trim();
    var label_pc = branch_map.get(lastarg);
    if(label_pc) { //is label
      var off = label_pc - pc + 1;
      splitins[splitins.length-1] = ' ' + off.toString();
      ins = splitins.join();
    }
  }


  //Not label or branch instruction
  let inst;
  try {
    inst = new Instruction(ins);
  } catch (error) {
    console.error(error);
    console.error("Instruction: " + ins + ", PC: " + pc);
  }
  return inst.bin + "\n";
}

function write_bin_file(content) {
  fs.writeFile(binf, content, err => {
    if (err) { console.error(err); } else { /* file written successfully */ }
  });
}

try {
  const data = fs.readFileSync(asmf, 'utf8');
  const lines = data.split(/\r?\n/);
  var binlines = "";
  var pc = 0;
  //First pass only builds labels
  for(var i = 0; i < lines.length-1; i++) {
    const l = lines[i];
    var binline = translate_ins(l, pc);
    if(binline != "") {
      pc++; //increment pc
    }
  }
  
  //Now actually assemble
  pc = 0;
  for(var i = 0; i < lines.length-1; i++) {
    const l = lines[i];
    var binline = translate_ins(l, pc);
    if(binline != "") {
      //write instruction
      binlines += binline;
      pc++; //increment pc
    } else {
      //not an instruction (comment or label)
    }
  }
  write_bin_file(binlines);

} catch (err) {
  console.error(err);
}


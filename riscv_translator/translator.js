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


function translate_ins(ins, pc) {
  if(ins.includes(":")) { //Found label
    branch_map.set(ins.replace(":", ""), pc);
    return "";
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
  let inst = new Instruction(ins);
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
  for(var i = 0; i < lines.length-1; i++) {
    const l = lines[i];
    binlines += translate_ins(l, i);
  }
  write_bin_file(binlines);

} catch (err) {
  console.error(err);
}


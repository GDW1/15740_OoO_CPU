//Uses https://gitlab.com/luplab/rvcodecjs/
import { Instruction } from './core/Instruction.js';

//https://stackoverflow.com/questions/69099763/referenceerror-require-is-not-defined-in-es-module-scope-you-can-use-import-in
import { createRequire } from "module";
const require = createRequire(import.meta.url);
const fs = require('fs')

const asmf = 'code.asm';
const binf = 'memory_file.mem';

function translate_ins(ins) {
  let inst = new Instruction(ins);
  return inst.bin;
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
    binlines += translate_ins(l) + "\n";
  }
  write_bin_file(binlines);

} catch (err) {
  console.error(err);
}


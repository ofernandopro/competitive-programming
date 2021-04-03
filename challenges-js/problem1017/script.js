const input = require("fs").readFileSync("stdin", "utf8");
const [tempoGasto, velMedia] = input.split("\n");

const qntLitros = tempoGasto * velMedia / 12;

console.log(qntLitros.toFixed(3));

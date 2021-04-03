const input = require("fs").readFileSync("stdin", "utf8");
const [distancia] = input.split("\n");

const tempo = distancia * 2;

console.log(tempo + " minutos");
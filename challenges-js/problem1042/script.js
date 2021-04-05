const input = require("fs").readFileSync("stdin", "utf8");
// Atribui os valores da entrada a cada variável (A, B e C)
const [A, B, C] = input.split(" ").map(item => parseInt(item));

var numeros = [A, B, C];
var numerosAux = [A, B, C];
numeros.sort(function(a, b){return a-b});

var i;

for (i = 0; i < numeros.length; i++)
  console.log(numeros[i]);

console.log("");

for (i = 0; i < numerosAux.length; i++)
  console.log(numerosAux[i]);


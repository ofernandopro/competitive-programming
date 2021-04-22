const input = require("fs").readFileSync("stdin", "utf8");
const [x, y] = input.split("\n").map(item => parseInt(item));

numeros = [x, y];
numeros.sort(function(a, b){return a-b});

var i = numeros[0] + 1;
var soma = 0;

for (i; i < numeros[1]; i++) {
  if (i % 2 !== 0) {
    soma += i;
  }
}

console.log(soma);
const input = require("fs").readFileSync("stdin", "utf8");
var [A, B, C, D, E, F] = input.split("\n").map(item => parseFloat(item));

var numeros = [A, B, C, D, E, F];
var counter = 0;

numeros.forEach(numero => {
  if (numero > 0)
    counter++;
});

console.log(counter + " valores positivos");
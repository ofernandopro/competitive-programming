const input = require("fs").readFileSync("stdin", "utf8");
var [A, B, C, D, E] = input.split("\n").map(item => parseFloat(item));

var numeros = [A, B, C, D, E];
var counter = 0;
var soma = 0;

numeros.forEach(numero => {
  if (numero % 2 === 0){
    counter++;
  }
});

console.log(counter + " valores pares");
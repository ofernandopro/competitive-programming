const input = require("fs").readFileSync("stdin", "utf8");
var [A, B, C, D, E] = input.split("\n").map(item => parseFloat(item));

var numeros = [A, B, C, D, E];
var counterPar = 0, counter = 0, counterNegativo = 0;
var soma = 0;

numeros.forEach(numero => {
  if (numero % 2 === 0){
    counterPar++;
  }
  if (numero > 0) {
    counter ++;
  } else if (numero < 0) {
    counterNegativo ++;
  }
});

console.log(counterPar + " valor(es) par(es)");
console.log(5 - counterPar + " valor(es) impar(es)");
console.log(counter + " valor(es) positivo(s)");
console.log(counterNegativo + " valor(es) negativo(s)");

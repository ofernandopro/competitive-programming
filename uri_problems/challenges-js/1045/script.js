const input = require("fs").readFileSync("stdin", "utf8");
// Atribui os valores da entrada a cada variável (A, B e C)
var [A, B, C] = input.split(" ").map(item => parseFloat(item));

var numeros = [A, B, C];
// Ordenando em ordem decrescente:
numeros.sort(function(a, b){return b-a});

A = numeros[0];
B = numeros[1];
C = numeros[2];

if (A >= B + C) {
  console.log("NAO FORMA TRIANGULO");
} else if(Math.pow(A, 2) == Math.pow(B, 2) + Math.pow(C, 2)) {
  console.log("TRIANGULO RETANGULO");
} else if (Math.pow(A, 2) > Math.pow(B, 2) + Math.pow(C, 2)) {
  console.log("TRIANGULO OBTUSANGULO");
} else if (Math.pow(A, 2) < Math.pow(B, 2) + Math.pow(C, 2)) {
  console.log("TRIANGULO ACUTANGULO");
}

if (A === B && A === C) {
  console.log("TRIANGULO EQUILATERO");
} else if (A === B && A !== C || A === C && A !== B || B === C && B !== A) {
  console.log("TRIANGULO ISOSCELES");
}

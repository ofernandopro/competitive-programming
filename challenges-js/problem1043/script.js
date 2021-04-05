const input = require("fs").readFileSync("stdin", "utf8");
// Atribui os valores da entrada a cada variável (A, B e C)
const [A, B, C] = input.split(" ").map(item => parseFloat(item));

var lados = [A, B, C];
var perimetro, areaTrapezio;

lados.sort(function(a, b){return a-b});

if(lados[0] + lados[1] <= lados[2]) {
  // Não pode existir um triângulo quando a soma dos dois lados menores é menor que o lado maior
  areaTrapezio = ((A + B) * C) / 2;
  console.log("Area = " + areaTrapezio.toFixed(1));
} else {
  perimetro = A + B + C;
  console.log("Perimetro = " + perimetro.toFixed(1));
}

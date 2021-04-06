const input = require("fs").readFileSync("stdin", "utf8");
var [salario] = input.split(" ").map(item => parseFloat(item));

var salarioAntesReajuste = salario;
var percentual;

if (salario <= 400.00) {
  salario *= 1.15;
  percentual = 15;
} else if (salario <= 800.00) {
  salario *= 1.12;
  percentual = 12;
} else if (salario <= 1200.00) {
  salario *= 1.1;
  percentual = 10;
} else if (salario <= 2000.00) {
  salario *= 1.07;
  percentual = 7;
} else if (salario > 2000.00) {
  salario *= 1.04;
  percentual = 4;
}

var reajuste = salario - salarioAntesReajuste;

console.log("Novo salario: " + salario.toFixed(2));
console.log("Reajuste ganho: " + reajuste.toFixed(2));
console.log("Em percentual: " + percentual + " %");

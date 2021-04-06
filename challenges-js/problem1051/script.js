const input = require("fs").readFileSync("stdin", "utf8");
var [salario] = input.split(" ").map(item => parseFloat(item));

if (salario <= 2000.00) {
  var imposto = 0;
} else if (salario <= 3000.00) {
  var imposto = (salario-2000.00) * 0.08;
} else if (salario <= 4500.00) {
  var imposto = 1000.00 * 0.08 + (salario - 3000.00) * 0.18;
} else if (salario > 4500.00) {
  var imposto = 1000.00 * 0.08 + 1500.00 * 0.18 + (salario-4500.00) * 0.28;
}

if(imposto === 0) {
  console.log("Isento");
} else {
  console.log("R$ " + imposto.toFixed(2));
}

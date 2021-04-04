const input = require("fs").readFileSync("stdin", "utf8");
const [codigo, qnt] = input.split(" ").map(item => parseInt(item));

var precos = [4.0, 4.5, 5.0, 2.0, 1.5];

var totalPreco = precos[codigo-1] * qnt;

console.log("Total: R$ " + totalPreco.toFixed(2));
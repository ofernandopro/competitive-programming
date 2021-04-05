const input = require("fs").readFileSync("stdin", "utf8");
// Atribui os valores da entrada a cada variável (A, B e C)
const [A, B] = input.split(" ").map(item => parseInt(item));

if (B % A == 0 || A % B == 0) {
  console.log("Sao Multiplos");
} else {
  console.log("Nao sao Multiplos");
}

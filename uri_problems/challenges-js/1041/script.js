const input = require("fs").readFileSync("stdin", "utf8");
const [x, y] = input.split(" ").map(item => parseFloat(item));

if (x > 0 && y > 0) {
  console.log("Q1");
} else if (x < 0 && y > 0) {
  console.log("Q2");
} else if (x < 0 && y < 0) {
  console.log("Q3");
} else if (x > 0 && y < 0) {
  console.log("Q4");
} else if (x !== 0 && y === 0) {
  console.log("Eixo X");
} else if (x === 0 && y !== 0) {
  console.log("Eixo Y");
} else if (x === 0 && y === 0) {
  console.log("Origem");
}
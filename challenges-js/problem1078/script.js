const input = require("fs").readFileSync("stdin", "utf8");
const [n] = input.split("\n").map(item => parseInt(item));

var i;

for (i = 1; i <= 10; i++) {
  console.log(i + " x " + n + " = " + i * n);
}
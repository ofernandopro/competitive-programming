const input = require("fs").readFileSync("stdin", "utf8");
const [numero] = input.split("\n").map(item => parseInt(item));

var i;

for (i = 1; i <= numero; i++) {
  if (i % 2 === 0)
    console.log(i + "^2" + " = " + i*i);
}
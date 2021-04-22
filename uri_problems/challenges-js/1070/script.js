const input = require("fs").readFileSync("stdin", "utf8");
const [numero] = input.split("\n").map(item => parseInt(item));

var i = numero, counter = 0;

while (counter < 6) {
  if (i % 2 !== 0){
    console.log(i);
    counter++;
  }
  i++;
}
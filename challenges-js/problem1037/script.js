const input = require("fs").readFileSync("stdin", "utf8");
var [numero] = input.split("\n");

if(numero >= 0 && numero <= 25) {
  console.log("Intervalo [0,25]");
} 
else if (numero > 25 && numero <= 50) {
  console.log("Intervalo (25,50]");
} 
else if (numero > 50 && numero <= 75) {
  console.log("Intervalo (50,75]");
} 
else if (numero > 75 && numero <= 100) {
  console.log("Intervalo (75,100]");
} 
else {
  console.log("Fora de intervalo");
}
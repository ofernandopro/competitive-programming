const input = require("fs").readFileSync("stdin", "utf8");
const [A, B, C] = input.split(" ").map(item => parseFloat(item));

if(A != 0 && (Math.pow(B, 2) - 4*A*C) >= 0){
  R1 = (-B + Math.sqrt(Math.pow(B, 2) - 4*A*C)) / (2*A);
  R2 = (-B - Math.sqrt(Math.pow(B, 2) - 4*A*C)) / (2*A);
  console.log("R1 = " + R1.toFixed(5));
  console.log("R2 = " + R2.toFixed(5));
} else {
  console.log("Impossivel calcular");
}
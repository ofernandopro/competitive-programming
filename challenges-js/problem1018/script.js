const input = require("fs").readFileSync("stdin", "utf8");
const [valor] = input.split("\n");

var valorRestante = valor;
var qntNotas100 = 0, qntNotas50 = 0, qntNotas20 = 0, qntNotas10 = 0, qntNotas5 = 0, qntNotas2 = 0, qntNotas1 = 0;

if(valor / 100 >= 1) {
  qntNotas100 = Math.trunc( valor / 100 );
  valorRestante = valor - qntNotas100 * 100;
}

if (valorRestante / 50 >= 1) {
  qntNotas50 = Math.trunc( valorRestante / 50 );
  valorRestante -= qntNotas50 * 50;
}

if (valorRestante / 20 >= 1) {
  qntNotas20 = Math.trunc( valorRestante / 20 );
  valorRestante -= qntNotas20 * 20;
}

if (valorRestante / 10 >= 1) {
  qntNotas10 = Math.trunc( valorRestante / 10 );
  valorRestante -= qntNotas10 * 10;
}

if (valorRestante / 5 >= 1) {
  qntNotas5 = Math.trunc( valorRestante / 5 );
  valorRestante -= qntNotas5 * 5;
}

if (valorRestante / 2 >= 1) {
  qntNotas2 = Math.trunc( valorRestante / 2 );
  valorRestante -= qntNotas2 * 2;
}

if (valorRestante >= 1) {
  qntNotas1 = Math.trunc( valorRestante );
  valorRestante -= qntNotas1 * 1;
}

console.log(valor);
console.log(qntNotas100 + " nota(s) de R$ 100,00");
console.log(qntNotas50 + " nota(s) de R$ 50,00");
console.log(qntNotas20 + " nota(s) de R$ 20,00");
console.log(qntNotas10 + " nota(s) de R$ 10,00");
console.log(qntNotas5 + " nota(s) de R$ 5,00");
console.log(qntNotas2 + " nota(s) de R$ 2,00");
console.log(qntNotas1 + " nota(s) de R$ 1,00");

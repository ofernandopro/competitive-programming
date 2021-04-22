const input = require("fs").readFileSync("stdin", "utf8");
var [valorDias] = input.split("\n");

/*
// Solução 1:

var valorRestante = valorDias;
var anos = 0, meses = 0, dias = 0;

// Acha quantidade de anos
if (valorRestante / 365 >= 1) {
  anos = Math.trunc(valorRestante / 365);
  valorRestante -= anos * 365;
}

// Acha quantidade de meses
if (valorRestante / 30 >= 1) {
  meses = Math.trunc(valorRestante / 30);
  valorRestante -= meses * 30;
}

// Acha quantidade de dias
if (valorRestante >= 1) {
  dias = valorRestante;
}

console.log(anos + " ano(s)");
console.log(meses + " mes(es)");
console.log(dias + " dia(s)");
*/

// Solução 2:

const diasPorAno = 365;
const diasPorMes = 30;

if(valorDias < 365)
  console.log("0 ano(s)");
else
  while (valorDias / 365 >= 1){
    console.log(`${parseInt(valorDias / diasPorAno)} ano(s)`);
    valorDias = valorDias % diasPorAno;
  }

if(valorDias < 30)
  console.log("0 mes(es)");
else
  while (valorDias / 30 >= 1){
    console.log(`${parseInt(valorDias / diasPorMes)} mese(s)`);
    valorDias = valorDias % diasPorMes;
  }

console.log(valorDias + " dia(s)");
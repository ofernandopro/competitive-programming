const input = require("fs").readFileSync("stdin", "utf8");
const [valorSegundos] = input.split("\n");

var valorRestante = valorSegundos;
var horas = 0, minutos = 0, segundos = 0;

// Acha quantidade de horas
if (valorRestante / 3600 >= 1) {
  horas = Math.trunc(valorRestante / 3600);
  valorRestante -= horas * 3600;
}

// Acha quantidade de minutos
if (valorRestante / 60 >= 1) {
  minutos = Math.trunc(valorRestante / 60);
  valorRestante -= minutos * 60;
}

// Acha quantidade de segundos
segundos = valorRestante;

console.log(horas + ":" + minutos + ":" + segundos);

const input = require("fs").readFileSync("stdin", "utf8");
const [horaInicial, minutoInicial, horaFinal, minutoFinal] = input.split(" ").map(item => parseInt(item));

if (horaInicial < horaFinal || 
  horaInicial == horaFinal && minutoInicial < minutoFinal) {
  var tempoInicial = horaInicial * 60 + minutoInicial;
  var tempoFinal = horaFinal * 60 + minutoFinal;

} else if (horaInicial > horaFinal || horaInicial == horaFinal && minutoInicial >= minutoFinal){
  var tempoInicial = horaInicial * 60 + minutoInicial;
  var tempoFinal = horaFinal * 60 + 24*60 + minutoFinal;
}

var tempoDeJogo = tempoFinal - tempoInicial;
var tempoRestante = tempoDeJogo;
var qntHoras = 0, qntMinutos = 0;

if (tempoDeJogo / 60 > 1) {
  qntHoras = Math.trunc(tempoRestante / 60);
  tempoRestante -= qntHoras * 60;
}

qntMinutos = tempoRestante;

console.log("O JOGO DUROU " + qntHoras + " HORA(S) E " + qntMinutos + " MINUTO(S)");
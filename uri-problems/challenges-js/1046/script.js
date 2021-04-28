const input = require("fs").readFileSync("stdin", "utf8");
const [horaInicial, horaFinal] = input.split(" ").map(item => parseInt(item));

var tempoDeJogo;

if (horaFinal > horaInicial) {
  tempoDeJogo = horaFinal - horaInicial;
} else {
  tempoDeJogo = horaFinal + 24 - horaInicial;
}

console.log("O JOGO DUROU " + tempoDeJogo + " HORA(S)");
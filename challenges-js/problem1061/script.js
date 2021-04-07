const input = require("fs").readFileSync("stdin", "utf8");
const [diaInicio, horarioInicio, diaFim, horarioFim] = input.split("\n");

if (diaInicio.length === 5){
  var diaInicial = parseInt(diaInicio[4]);
} else {
  var diaInicial = parseInt(diaInicio[4]) * 10 + parseInt(diaInicio[5]);
}

if (diaFim.length === 5){
  var diaFinal = parseInt(diaFim[4]);
} else {
  var diaFinal = parseInt(diaFim[4]) * 10 + parseInt(diaFim[5]);
}

// Pegando os dados das strings e transformando-os em inteiros:
var horaInicio = parseInt(horarioInicio[0]) * 10 + parseInt(horarioInicio[1]);
var minutoInicio = parseInt(horarioInicio[5]) * 10 + parseInt(horarioInicio[6]);
var segundosInicio = parseInt(horarioInicio[10]) * 10 + parseInt(horarioInicio[11]);

var horaFim = parseInt(horarioFim[0]) * 10 + parseInt(horarioFim[1]);
var minutoFim = parseInt(horarioFim[5]) * 10 + parseInt(horarioFim[6]);
var segundosFim = parseInt(horarioFim[10]) * 10 + parseInt(horarioFim[11]);


function calculaTempo() {

  tempoInicio = horaInicio * 3600 + minutoInicio * 60 + segundosInicio; 

  if((horaInicio < horaFim) || 
    (horaInicio === horaFim && minutoInicio < minutoFim) ||
    (horaInicio === horaFim && minutoInicio === minutoFim && segundosInicio < segundosFim))
  {
    tempoFim = horaFim * 3600 + minutoFim * 60 + segundosFim; 
  } else {
    tempoFim = 86400 + horaFim * 3600 + minutoFim * 60 + segundosFim; 
  }

  tempoEvento = tempoFim - tempoInicio;

  if (tempoEvento / 3600 >= 1) {
    horas = Math.trunc(tempoEvento / 3600);
    tempoEvento -= (horas * 3600);
  }
  if (tempoEvento / 60 >= 1) {
    minutos = Math.trunc(tempoEvento / 60);
    tempoEvento -= (minutos * 60);
  }
  
  segundos = tempoEvento; 
}


// Calculando tempo em segundos passados de 00:00:00 do dia 1
var tempoEvento;
var dias = 0, horas = 0, minutos = 0, segundos = 0;

if (diaInicial === diaFinal) {
  calculaTempo(); 
} else if (diaInicial !== diaFinal) {
  if((horaFim > horaInicio) || 
  (horaFim === horaInicio && minutoFim > minutoInicio) ||
  (horaFim === horaInicio && minutoFim === minutoInicio && segundosFim > segundosInicio)) {
    dias = diaFinal - diaInicial;
    calculaTempo();
  } else {
    dias = diaFinal - diaInicial - 1;
    calculaTempo();
  }
}

// Imprimindo Valores:
console.log(dias + " dia(s)");
console.log(horas + " hora(s)");
console.log(minutos + " minuto(s)");
console.log(segundos + " segundo(s)");
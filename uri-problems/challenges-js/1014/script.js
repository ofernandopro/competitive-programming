// Lê do arquivo os valores de entrada
const input = require("fs").readFileSync("stdin", "utf8");
// Armazena os valores de entrada nas 2 variáveis abaixo
const [distanciaPercorrida, combustivelGasto] = input.split("\n");

const consumoMedio = distanciaPercorrida / combustivelGasto;

console.log(consumoMedio.toFixed(3) + " km/l");
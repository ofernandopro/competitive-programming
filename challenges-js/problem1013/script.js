/*
Original:

var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\n');

var a = parseInt(lines.shift());
var b = parseInt(lines.shift());

var soma = a + b;

console.log(soma);
*/

// Lê o consteúdo  do arquivo stdin e armazena na variável input:
const input = require("fs").readFileSync("stdin", "utf8");

// Atribui os valores da entrada a cada variável (A, B e C) e os transforma em número com o parseInt
const [A, B, C] = input.split(" ").map(item => parseInt(item));

const maiorAB = (A + B + Math.abs(A - B)) / 2;
const maior = (C + maiorAB + Math.abs(C - maiorAB)) / 2;

console.log(maior + " eh o maior");
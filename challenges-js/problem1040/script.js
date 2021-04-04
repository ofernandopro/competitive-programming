const input = require("fs").readFileSync("stdin", "utf8");
let data = input.split(' ');
let exame = input.split('\n');

let N1 = parseFloat(data.shift());
let N2 = parseFloat(data.shift());
let N3 = parseFloat(data.shift());
let N4 = parseFloat(data.shift());
let notaExame = parseFloat(exame.shift());

let media = ((N1*2)+(N2*3)+(N3*4)+(N4*1))/10;
let mediaFinal = (parseFloat(exame) + parseFloat(media))/2;

console.log("Media: " + media.toFixed(1));

if (media >= 7.0){
    console.log('Aluno aprovado.');
}else if (media < 5.0){
    console.log('Aluno reprovado.');
} else if (media >= 5.0 && media <= 6.9) {
    console.log('Aluno em exame.');
    console.log("Nota do exame: " + exame);
    if(mediaFinal >= 5.0){
      console.log('Aluno aprovado.');
    } else {
      console.log('Aluno reprovado.');
    }
    console.log('Media final: ' + mediaFinal.toFixed(1));
}
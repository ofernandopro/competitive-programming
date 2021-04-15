var input = require('fs').readFileSync('stdin', 'utf8');
let arr = input.split('\n').map(item => parseInt(item));
let aux = 0;
if (arr[0] >= 10000) aux++;
arr.shift();

if(aux === 0){
  arr.forEach(numero => {
    if(numero > -10000000 && numero < 10000000){
      if(numero === 0) {
        console.log("NULL");
      } else {
        if(numero % 2 === 0) {
          if(numero > 0) console.log("EVEN POSITIVE");
          else console.log("EVEN NEGATIVE");
        } else {
          if(numero > 0) console.log("ODD POSITIVE");
          else console.log("ODD NEGATIVE");
        }
      }
    }
  });
}
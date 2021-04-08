var input = require('fs').readFileSync('stdin', 'utf8');
let arr = input.split('\n');
let aux = 0;
if (arr[0] >= 10000) aux++;
arr.shift();
let counterIn = 0, counterOut = 0;

arr.forEach(item => {
  if(item > -10000000 && item < 10000000 && aux === 0){
    if (item >= 10 && item <= 20) 
      counterIn++ 
    else
      counterOut++;
  }
});

console.log(counterIn + " in");
console.log(counterOut + " out");
var i = 1, j = 7, cont = 0;

while (i <= 9) {
  cont++;
  console.log("I=" + i + " J=" + j);
  if(cont % 3 === 0) {
    i = i + 2;
    j = 7;
  } else {
    j = j - 1;
  }
}
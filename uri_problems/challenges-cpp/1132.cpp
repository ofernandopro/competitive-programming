#include <iostream>

using namespace std;

int main(){

  int x, y, i, menor, maior, soma = 0;

  cin >> x >> y;

  if (x >= y) {
    menor = y;
    maior = x;
  } else {
    menor = x;
    maior = y;
  }

  for (i = menor; i <= maior; i++) {
    if (i % 13 != 0) {
      soma += i;
    }
  }

  cout << soma << endl;

  return 0;
}
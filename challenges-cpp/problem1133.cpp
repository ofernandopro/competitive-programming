#include <iostream>

using namespace std;

int main(){

  int x, y, menor, maior, i;

  cin >> x >> y;

  if (x > y) {
    menor = y;
    maior = x;
  } else {
    menor = x;
    maior = y;
  }

  for (i = menor + 1; i < maior; i++) {
    if (i % 5 == 2 || i % 5 == 3) cout << i << endl;
  }

  return 0;

}
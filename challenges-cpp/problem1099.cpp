#include <iostream>

using namespace std;

int main(){

  int n, i, x, y, soma;
  cin >> n;

  for (i = 0; i < n; i++) {
    cin >> x >> y;
    soma = 0;   
    int maior, menor;
    if(x > y){ 
      maior = x;
      menor = y;
    } else {
      maior = y;
      menor = x;
    }

    for (menor = menor + 1; menor < maior; menor++) {
      if(menor % 2 != 0) soma += menor;
    }

    cout << soma << endl;

  }

  return 0;
}
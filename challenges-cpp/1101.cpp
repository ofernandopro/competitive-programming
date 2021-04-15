#include <iostream>

using namespace std;

int main(){

  int m = 1, n = 1, soma;

  while (m > 0 && n > 0) {
    cin >> m >> n;

    if(m <= 0 || n <= 0) break;

    soma = 0;   
    int maior, menor;
    if(m > n){ 
      maior = m;
      menor = n;
    } else {
      maior = n;
      menor = m;
    }

    for (menor; menor <= maior; menor++) {
      cout << menor << " ";
      soma += menor;
    }

    cout << "Sum=" << soma << endl;

  }

  return 0;
}
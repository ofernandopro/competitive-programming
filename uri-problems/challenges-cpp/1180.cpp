#include <iostream>
#include <limits.h>

using namespace std;

int main(){

  int n, i, menor = INT_MAX, pos;
  cin >> n;
  int x[n];

  for (i = 0; i < n; i++) {
    cin >> x[i];
    if(x[i] < menor) {
      menor = x[i];
      pos = i;
    }
  }

  cout << "Menor valor: " << menor << endl;
  cout << "Posicao: " << pos << endl;
 
  return 0;

}
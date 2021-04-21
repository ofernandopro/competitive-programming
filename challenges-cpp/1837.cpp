#include <iostream>

using namespace std;

int main() {

  int a, b, cont, resto, aux;
  cin >> a >> b;

  if (a == 0) {
    cout << 0 << " " << 0 << endl;
  } else if (a > 0) {
    cout << a/b << " " << a % b << endl;
  } 
  else { // a negativo
      aux = 0, cont = 0;
      while (aux > a) {
        if (b > 0) aux = aux - b;
        else aux = aux + b;
        cont++;
      }
      resto = (aux - a) * (-1);
      if (b > 0) cout << cont * (-1); 
      else cout << cont;
      cout << " " << resto << endl;
  }

  return 0;
}
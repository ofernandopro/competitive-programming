#include <iostream>

using namespace std;

int main(){

  int x, z, soma = 0, cont = 0;

  cin >> x;
  int i = x;

  do {
    cin >> z;
  } while (z <= x);

  while (soma < z) {
    soma += i;
    i++;
    cont++;
  }

  cout << cont << endl;

  return 0;

}
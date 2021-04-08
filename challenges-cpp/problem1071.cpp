#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool myfunction (int i,int j) { return (i<j); }

int main () {

  int numero, i;
  vector<int> numeros;

  for (i = 0; i < 2; i++)
  {
    cin >> numero;
    numeros.push_back(numero);
  }

  sort (numeros.begin(), numeros.end(), myfunction);

  int aux;
  int soma = 0;

  for (aux = numeros[0] + 1; aux < numeros[1]; aux++) {
    if (aux % 2 != 0) {
      soma += aux;
    }
  }

  cout << soma << endl;

  return 0;

}
#include <iostream>
#include <vector>

using namespace std;

#define dbg(x) cout << #x << " = " << x << endl;

int fibonacci(int n) {
  vector<int> lista;
  if (n == 0) return 0;
  else if (n == 1) return 1;
  if (n == 2) return 1;
  else {
    lista.push_back(1);
    lista.push_back(1);

    for (int i = 2; i < n; i++) {
      int soma = 0;
      soma += lista[i-2] + lista[i-1];
      //dbg(soma);
      lista.push_back(soma);
    }
  }
  return lista[n-1];

  /* RECURSIVO:
  if (n == 0) return 0;
  else if (n == 1) return 1;
  return fibonacci(n - 1) + fibonacci(n - 2);
  */

}

int main(){

  vector<int> sequencia;
  int qntNumbers, number;
  cin >> qntNumbers;

  for (int i = 0; i < qntNumbers; i++) {

    cin >> number;
    sequencia.push_back(fibonacci(number));

  }

  for (int i = 0; i < sequencia.size(); i++) {
    cout << "Fib(" << i << ") = " << sequencia[i] << endl;
  }

  return 0;

}
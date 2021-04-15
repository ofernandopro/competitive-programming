#include <iostream>

using namespace std;

int main(){

  int a, n, i, soma = 0;

  cin >> a;
  do {
    cin >> n;
  } while (n <= 0);

  for (i = 0; i < n; i++) {
    soma += i + a;
  }

  cout << soma << endl;

  return 0;

}
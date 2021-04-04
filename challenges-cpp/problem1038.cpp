#include <iostream>
#include <iomanip>

using namespace std;

int main() {

  int codigo, qnt;

  cin >> codigo;
  cin >> qnt;

  float precos[5] = { 4.0, 4.5, 5.0, 2.0, 1.5 };

  float totalPreco = precos[codigo-1] * qnt;

  cout << "Total: R$ " << fixed << setprecision(2) << totalPreco << endl;;

  return 0;

}
#include <iostream>
#include <iomanip>

using namespace std;

int main(){

  int cont = 0;
  float nota, soma = 0;

  while (cont < 2) {

    cin >> nota;

    if (nota >= 0 && nota <= 10) {
      cont++;
      soma += nota;
    } else {
      cout << "nota invalida" << endl;
    }

  }

  cout << "media = " << fixed << setprecision(2) << soma / 2 << endl;

  return 0;
}
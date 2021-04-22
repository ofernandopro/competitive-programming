#include <iostream>
#include <iomanip>

using namespace std;

int main(){

  int cont = 0;
  int x = 0;
  float nota, soma = 0;
  bool stop = false;

  while (!stop) {

    cin >> nota;

    if (nota < 0 || nota > 10) cout << "nota invalida" << endl;
    else {
      soma += nota;
      cont ++;
    }

    if (cont == 2) {
      cout << "media = " << fixed << setprecision(2) << soma / 2 << endl;
      soma = 0;
      x = 0;
      while (x != 1 && !stop){
        cout << "novo calculo (1-sim 2-nao)" << endl;
        cin >> x;
        cont = 0;
        if (x == 2){
          stop = true;
        }
      }
    }

  }

  return 0;

}
#include <iostream>

using namespace std;

int main(){

  int comb, alcool = 0, gasolina = 0, diesel = 0;

  do {
    cin >> comb;

    if (comb == 1) alcool++;
    else if (comb == 2) gasolina++;
    else if (comb == 3) diesel++;

  } while (comb != 4);

  cout << "MUITO OBRIGADO" << endl;
  cout << "Alcool: " << alcool << endl;
  cout << "Gasolina: " << gasolina << endl;
  cout << "Diesel: " << diesel << endl;

  return 0;

}
/*
#include <iostream>

using namespace std;

int main() {

  float valor;
  cin >> valor;
  int valorInt = valor * 100;
  int contNota100 = 0, contNota50 = 0, contNota20 = 0, contNota10 = 0, contNota5 = 0, contNota2 = 0;
  int contMoeda100 = 0, contMoeda50 = 0, contMoeda25 = 0, contMoeda10 = 0, contMoeda5 = 0, contMoeda1 = 0;
  int valores[12] = {10000, 5000, 2000, 1000, 500, 200, 100, 50, 25, 10, 5, 1};

  int i = 0;

  while(valorInt > 0) {

    if (valorInt - valores[i] >= 0) {
      valorInt -= valores[i];

      if (i == 0) {
        contNota100++;
      } else if (i == 1) {
        contNota50++;
      } else if (i == 2) {
        contNota20++;
      } else if (i == 3) {
        contNota10++;
      } else if (i == 4) {
        contNota5++;
      } else if (i == 5) {
        contNota2++;
      } else if (i == 6) {
        contMoeda100++;
      } else if (i == 7) {
        contMoeda50++;
      } else if (i == 8) {
        contMoeda25++;
      } else if (i == 9) {
        contMoeda10++;
      } else if (i == 10) {
        contMoeda5++;
      } else if (i == 11) {
        contMoeda1++;
      }

    } else {
      i++;
    }

  }

  cout << "NOTAS:" << endl;
  cout << contNota100 << " nota(s) de R$ 100.00" << endl;
  cout << contNota50 << " nota(s) de R$ 50.00"  << endl;
  cout << contNota20 << " nota(s) de R$ 20.00"  << endl;
  cout << contNota10 << " nota(s) de R$ 10.00"  << endl;
  cout << contNota5 << " nota(s) de R$ 5.00"  << endl;
  cout << contNota2 << " nota(s) de R$ 2.00"  << endl;
  cout << "MOEDAS:" << endl;
  cout << contMoeda100 << " moeda(s) de R$ 1.00" << endl;
  cout << contMoeda50 << " moeda(s) de R$ 0.50" << endl;
  cout << contMoeda25 << " moeda(s) de R$ 0.25"  << endl;
  cout << contMoeda10 << " moeda(s) de R$ 0.10"  << endl;
  cout << contMoeda5 << " moeda(s) de R$ 0.05"  << endl;
  cout << contMoeda1 << " moeda(s) de R$ 0.01"  << endl;

  return 0;
}
*/

#include <iostream>

using namespace std;

int main() {

  double contNota100, contNota50, contNota20, contNota10, contNota5, contNota2;
  double contMoeda100, contMoeda50, contMoeda25, contMoeda10, contMoeda5, contMoeda1;

  double n;
  cin >> n;

  int notas = n;
  int moedas = (n - notas) * 100;

  if((moedas * 1000) % 10 == 9){
    moedas++;
  }

  contNota100 = notas/100;
  notas = notas % 100;

  contNota50 = notas/50;
  notas = notas % 50;

  contNota20 = notas/20;
  notas = notas % 20;

  contNota10 = notas/10;
  notas = notas % 10;

  contNota5 = notas/5;
  notas = notas % 5;

  contNota2 = notas/2;
  notas = notas % 2;

  contMoeda100 = notas/1;
  notas = notas % 1;

  contMoeda50 = moedas/50;
  moedas = moedas % 50;

  contMoeda25 = moedas/25;
  moedas = moedas % 25;

  contMoeda10 = moedas/10;
  moedas = moedas % 10;

  contMoeda5 = moedas/5;
  moedas = moedas % 5;

  contMoeda1 = moedas;

  cout << "NOTAS:" << endl;
  cout << contNota100 << " nota(s) de R$ 100.00" << endl;
  cout << contNota50 << " nota(s) de R$ 50.00" << endl;
  cout << contNota20 << " nota(s) de R$ 20.00" << endl;
  cout << contNota10 << " nota(s) de R$ 10.00" << endl;
  cout << contNota5 << " nota(s) de R$ 5.00" << endl;
  cout << contNota2 << " nota(s) de R$ 2.00" << endl;
  cout << "MOEDAS:" << endl;
  cout << contMoeda100 << " moeda(s) de R$ 1.00" << endl;
  cout << contMoeda50 << " moeda(s) de R$ 0.50" << endl;
  cout << contMoeda25 << " moeda(s) de R$ 0.25" << endl;
  cout << contMoeda10 << " moeda(s) de R$ 0.10" << endl;
  cout << contMoeda5 << " moeda(s) de R$ 0.05" << endl;
  cout << contMoeda1 << " moeda(s) de R$ 0.01" << endl;

  return 0;

}
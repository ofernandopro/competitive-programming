#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int main() {

  float numero;
  vector<float> numeros;
  int counter = 0;
  int i;
  
  for(i = 0; i < 6; i++) {
    cin >> numero;
    numeros.push_back(numero);
  }

  float soma = 0, media = 0;

  for (vector<float>::const_iterator i = numeros.begin(); i != numeros.end(); ++i){
    if(*i > 0) {
      counter ++;
      soma += *i;
    }
  }

  if(counter > 0){
    media = soma / counter;
  } else {
    media = 0;
  }

  cout << counter << " valores positivos" << endl;
  cout << fixed << setprecision(1) << media << endl;

  return 0;
}
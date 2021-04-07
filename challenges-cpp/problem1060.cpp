#include <iostream>
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

  for (vector<float>::const_iterator i = numeros.begin(); i != numeros.end(); ++i)
    if(*i > 0) counter ++;

  cout << counter << " valores positivos" << endl;

  return 0;
}
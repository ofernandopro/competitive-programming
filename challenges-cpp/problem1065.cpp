#include <iostream>
#include <vector>

using namespace std;

int main() {

  int numero;
  vector<int> numeros;
  int counter = 0;
  int i;
  
  for(i = 0; i < 5; i++) {
    cin >> numero;
    numeros.push_back(numero);
  }

  float aux;

  for (vector<int>::const_iterator i = numeros.begin(); i != numeros.end(); ++i){
    if(*i % 2 == 0) counter ++;
  }

  cout << counter << " valores pares" << endl;

  return 0;
}
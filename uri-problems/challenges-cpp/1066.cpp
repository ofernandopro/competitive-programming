#include <iostream>
#include <vector>

using namespace std;

int main() {

  int numero;
  vector<int> numeros;
  int counterPar = 0, counterPositivo = 0, counterNegativo = 0;
  int i;
  
  for(i = 0; i < 5; i++) {
    cin >> numero;
    numeros.push_back(numero);
  }

  for (vector<int>::const_iterator i = numeros.begin(); i != numeros.end(); ++i){
    if(*i % 2 == 0) counterPar ++;
    if(*i > 0) counterPositivo ++;
    else if (*i < 0) counterNegativo ++;
  }

  cout << counterPar << " valor(es) par(es)" << endl;
  cout << 5 - counterPar << " valor(es) impar(es)" << endl;
  cout << counterPositivo << " valor(es) positivo(s)" << endl;
  cout << counterNegativo << " valor(es) negativo(s)" << endl;

  return 0;
}
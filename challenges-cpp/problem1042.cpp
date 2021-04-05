#include <iostream>
#include <iomanip>
#include <algorithm>    // std::sort
#include <vector>       // std::vector

using namespace std;

bool myfunction (int i,int j) { return (i<j); }

int main() {

  int i;
  int numero;
  vector<int> numeros;
  vector<int> numerosAux;

  for (i = 0; i < 3; i++)
  {
    cin >> numero;
    numeros.push_back(numero);
  }

  // Colocando os elementos do vetor numeros em um vetor auxiliar para imprimir 
  // os elementos na ordem que foram lidos:
  for (vector<int>::iterator it=numeros.begin(); it!=numeros.end(); ++it)
    numerosAux.push_back(*it);
  
  // Usando a função myfunction para fazer a comparação
  sort (numeros.begin(), numeros.end(), myfunction);

  // Imprimindo o vetor ordenado:
  for (vector<int>::iterator it=numeros.begin(); it!=numeros.end(); ++it)
    cout << *it << endl;
  cout << endl;

  // Imprimindo o vetor que armazena os elementos na ordem que foram lidos
  for (vector<int>::iterator it=numerosAux.begin(); it!=numerosAux.end(); ++it)
    cout << *it << endl;

  return 0;
}
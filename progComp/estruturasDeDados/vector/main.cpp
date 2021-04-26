#include <iostream>
#include <vector>
typedef long long ll;

using namespace std;

/*
Vector admite elementos repetidos!

v.size() - Retorna o número de elementos do vetor
v.empty() - Retorna se o vector está vazio
v.push_back(valor) - adiciona a variável valor ao final do vector
v.pop_back() - remove último elemento
v.clear() - esvazia um vetor

*/

int main()
{
  vector<int> v;
  v.push_back(2); // O(1)
  v.push_back(3);
  v.push_back(4);

  // É possível escolher o tamanho inicial do seu vector quando o criamos:
  int n = 3;
  vector<int> v2(n);

  // Pode-se escolher o valor incial dos elementos do vector quando o criamos:
  vector<ll> v(n, 1); // vector de tamanho n com elementos iniciados como 1

  // Para acesso, um vector funciona como um array - O(1)
  vector<vector<int> > v3(10, vector<int>(3));
  v3[3][2] = 4;

  cout << "Tamanho: " << v.size() << endl;
  
  if (v.empty())
    cout << "Vector vazio!" << endl;
  else
    cout << "Vector não vazio!" << endl;


  // Imprime vector:
  for (auto it = v.begin(); it != v.end(); it++)
    cout << *it << " ";
  cout << endl;


  // Imprime um certo elemento do vector:
  cout << v[1] << endl;


  v.pop_back();


  // Imprime vector:
  for (auto it = v.begin(); it != v.end(); it++)
    cout << *it << " ";
  cout << endl;

  v.clear();

  // Imprimirá vetor VAZIO
  for (auto it = v.begin(); it != v.end(); it++)
    cout << *it << " ";
  cout << endl;


	return 0;
}
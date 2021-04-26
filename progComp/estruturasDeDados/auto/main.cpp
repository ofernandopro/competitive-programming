#include <iostream>
#include <vector>
#include <set>
#include <utility>
#include <map>

/**
 * auto = permite declarar uma variável sem nomear seu tipo.
 * Torna fácil iterar por set e map
 * Range-based for: É possível iterar por estruturas usando : e auto
 * Exemplo: Vector
 * 
 */

using namespace std;

int main() {

  vector<int> v;
  v.push_back(0); v.push_back(1); v.push_back(2);

  for (auto i : v) cout << i << " "; // O i ali no for não é o valor real e sim uma cópia
  cout << endl;

  // Para fazer com o verdadeiro i:
  for (auto& i : v) i = i + 1;

  for (auto i : v) cout << i << " ";
  cout << endl;


  // USANDO RANGE BASED FOR EM SETS:

  set<pair<int,char> > s;
  
  s.insert({2, 'a'});
  s.insert({1, 'b'});

  for (auto p : s) cout << p.first << " " << p.second << endl;

  // Saída:
  // 1 b
  // 2 a
  // (Imprimiu o 1 b primeiro pois o set ordena os elementos ao inserir. Como há um pair
  // dentro do set, este ordena crescente pelo primeiro valor do set e, se for houver empate,
  // ordena pelo segundo valor.)

  // USANDO RANGE BASED FOR EM MAPS:

  map<int, char> m;

  m[2] = 'b';
  m[1] = 'a';

  for(auto i : m) cout << i.first << " " << i.second << endl;

  // Saída:
  // 1 a
  // 2 b
  // (Também imprime ordenado) Ao iterar em um map eu recebo um pair em que o primeiro
  // é o valor elemento é a chave e o segundo


  return 0;
}
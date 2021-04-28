#include <iostream>
#include <string>
#include <algorithm> // sort, funções de max e min
#include <vector>
#include <utility> // pair
#include <iterator>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <math.h>
#define f first
#define s second
// Função útil de debugging, basta escrever "dbg(a)" no código que printará "a = val a"
#define dbg(x) cout << #x << " = " << x << endl;

typedef long long ll; // Long long é um inteiro de 64 bits
const int INF = 0x3f3f3f3f; // Não são infinito mas é um número muito grande (se somar 2 deles vai dar overflow)
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

// Defininfo a macro "_", muito importante para grandes entradas
// Antes de submeter o código e para debugá-lo, comente esta parte
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'


using namespace std;

int main() { _

/*
  // -------------- FAZENDO COM PAIR:

  int n; cin >> n;

  vector<int> v(n);

  for (int i = 0; i < n; i++) { // O(n)
    cin >> v[i];
  }

  vector<pair<int, int> > vp;
  vector<int> ord;
  ord = v;

  sort(ord.begin(), ord.end());// O(nlogn)

  for(int i = 0; i < ord.size(); i++) { // O(n)
    pair<int, int> p;
    p.first = i;
    p.second = ord[i];
    vp.push_back(p);
  }

  for(int i = 0; i < v.size(); i++) { // O(n)
    for(int j = 0; j < vp.size(); j++) { // O(n)
      if(v[i] == vp[j].second) {
        cout << vp[j].first << " ";
      }
    }
  } // O(nˆ2)
  cout << endl;
*/

  // -------------- FAZENDO COM MAP:

  int n; cin >> n;

  vector<int> v(n), ordv(n);

  for(int i=0; i < n; i++) {
    cin >> v[i];
    ordv[i] = v[i];
  }

  sort(ordv.begin(), ordv.end());

  map<int, int> novoidx;

  for(int i=0; i < n; i++) {
    novoidx[ordv[i]] = i;
  }

  for(int i=0; i < n; i++)
    v[i] = novoidx[v[i]];

  for(int i=0; i < n; i++)
    cout << v[i] << " ";
  cout << endl;


  return 0;
}
#include <iostream>
#include <string>
#include <algorithm> // sort, funções de max e min
#include <functional> // greater
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

bool comparacao(pair<int, int> & left, pair<int, int> & right)
{ // Ordena pelo segundo elemento (second) de cada pair
    return left.second < right.second;
}

int main() { _

  int n; cin >> n;
  vector<pair<int, int> > v;
  vector<pair<int, int> > ans;

  for (int i = 0; i < n; i++) {
    pair<int, int> p;
    cin >> p.first >> p.second;
    v.push_back(p);
  }

  sort(v.begin(), v.end(), comparacao);

  ans.push_back(v[0]);
  int cont = 0;

  for (int i = 0; i < n-1; i++) {
    if (v[i+1].first > ans[cont].second) {
      ans.push_back(v[i+1]);
      cont++;
    }
  }

  cout << cont+1 << endl;

  return 0;
}
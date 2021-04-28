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

int main() { _

  int n; cin >> n;
  vector<int> v;

  for (int i = 0; i < n; i++) {
    int a; cin >> a;
    v.push_back(a);
  }

  int soma_ant = -INF;
  int ans = -INF;

  for (int i = 0; i < n; i++) {
    if (soma_ant < 0) {
      soma_ant = v[i];
    } else {
      soma_ant += v[i];
    }
    ans = max(soma_ant, ans);
  }

  cout << ans << endl;  

  return 0;
}
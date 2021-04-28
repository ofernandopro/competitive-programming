#include <iostream>
#include <vector>

typedef long long ll; // Long long é um inteiro de 64 bits
const int INF = 0x3f3f3f3f; // Não são infinito mas é um número muito grande (se somar 2 deles vai dar overflow)
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

using namespace std;

int main() {

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
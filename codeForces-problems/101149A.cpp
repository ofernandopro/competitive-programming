#include <iostream>

typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

using namespace std;

int main() {

  ll n, x;
  cin >> n;
  int maior = -INF;

  for (ll i = 0; i < n; i++) { // O(n) - 10ˆ5
    cin >> x;
    if (x > maior) maior = x;
  }

  cout << maior << endl;

  return 0;
}
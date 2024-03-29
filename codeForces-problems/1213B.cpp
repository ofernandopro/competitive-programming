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

#define dbg(x) cout << #x << " = " << x << endl;

typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

using namespace std;

int main() { _

  int t, n, a, index;
  cin >> t;
  vector<int> v;

  for (int i = 0; i < t; i++) {
    int menor = INF;
    int qnt = 0;

    cin >> n;
    for (int j = 0; j < n; j++) {
      cin >> a;
      v.push_back(a);
    }

    while (v.size() > 0) {
      for (int j = 0; j < v.size(); j++) { // Pega o menor elemento do subvetor
        if (v[j] < menor) {
          index = j;
        }
      }
      v.erase(v.begin(), v.begin()+index+1);
      if (index != 0) qnt += index;
      menor = INF;
    }

    dbg(qnt);

  }

  return 0;
}
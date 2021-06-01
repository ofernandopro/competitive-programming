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

  int n;
  cin >> n;
  int array[n];
  int aux, numSwaps = 0;
  vector<pair<int, int> > v;

  for (int i = 0; i < n; i++) {
    cin >> array[i];
  }

  for(int i = 0; i < n; i++) {
    for (int j = 1; j < n; j++) {
      if (array[j] < array[i]) {
        aux = array[i];
        array[i] = array[j];
        array[j] = aux;
        numSwaps++;
        pair<int, int> p = make_pair(i, j);
        v.push_back(p);
      }
    }
  }

  cout << numSwaps << endl;
  for (int i = 0; i < v.size(); i++) {
    cout << v[i].first << " " << v[i].second << endl;
  }

  for (int i = 0; i < n; i++) {
    cout << array[i] << " ";
  }
  cout << endl;

  return 0;
}
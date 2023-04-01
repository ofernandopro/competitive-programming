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

  vector<int> v1;
  set<int> s1;
  map<int, string> m1;
  queue<int> q1;
  stack<int> s1;

  int aux, n;
  cin >> n;

  for(int i = 0; i < n; i++) {

    cin >> aux;
    v1.push_back(aux);

  }

  sort(v1.begin(), v1.end()); 
  
  for(int i = 0; i < n; i++) {

    cout << v1[i] << endl;
    s1.insert(v1[i]);

  }

  return 0;
}
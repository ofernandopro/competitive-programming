#include <iostream>
#include <string>
#include <algorithm> // sort, erase, funções de max e min
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

  int num;
  cin >> num;

  for (int i = 0; i < num; i++) {

    string diam;
    cin >> diam;
    int countQntDiam = 0;

    diam.erase(remove(diam.begin(), diam.end(), '.'), diam.end());
    diam.erase(remove(diam.begin(), diam.end(), ','), diam.end());

    cout << diam << endl;

    int j = 0;
    while (j < diam.length() - 1) {
      dbg(j);
      dbg(diam.length());
      if (diam[j] == '<' && diam[j+1] == '>') {
        countQntDiam++;
        cout << countQntDiam << endl;
        diam.erase(j,2); 
        cout << diam << endl;
        j = 0;
      }
      j++;
    }

    dbg(countQntDiam);

  }

  return 0;
}
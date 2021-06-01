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

bool isSpecial(int a) {
  int cont = 0;
  auto s = std::to_string(a);
  if (s.size() == 1) return true;
  else {
    for(int i = 1; i < s.size(); i++) {
      if (s[i] == 0) cont++;
    }
    if (cont == s.size()-1) return true;
    else return false;
  }
}

int main() { _

  int t, a, b;
  cin >> t;

  for (int i = 0; i < t; i++) {
    cin >> a >> b;

    bool aIsSpecial = isSpecial(a);
    bool bIsSpecial = isSpecial(b);

    if(aIsSpecial && bIsSpecial) {
      cout << a << " * " << b << endl;
    } else if (aIsSpecial && !bIsSpecial) {

    } else if (!aIsSpecial && bIsSpecial) {

    } else {
      
    }

  }

  cout << round(17) << endl;

  return 0;
}
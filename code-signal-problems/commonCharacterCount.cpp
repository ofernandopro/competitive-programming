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

  string s1 = "aabcc";
  string s2 = "adcaa";

  vector<map<char, int> > v1;

  for (int i = 0; i < s1.size(); i++) {
    map<char, int> m;
    m.insert( {s1[i], 0} );
    v1.push_back(m);
  }

  for (int i = 0; i < s1.size(); i++) {
    for (auto& x : v1) {
      x[s1[i]]++;
    }
  }
 
  for (auto x : v1) {
   for (auto it=x.begin(); it!=x.end(); ++it){
      cout<< it->first << " => " << it->second << '\n';
   }
}


  return 0;
}
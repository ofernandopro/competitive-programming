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

  int t, cont = 0, aux = 0;
  //vector<string> v;

  while (cin >> t) {

    int ops[t][3];

    for (int i = 0; i < t; i++) {
      for (int j = 0; j < 3; j++) {
        ops[0][0] = 0;
      }
    }

    for (int i = 0; i < t; i++) {
      string op;
      getline (cin, op);
      //v.push_back(op);
      string s(1, op[aux]);
      string s2(1, op[aux+2]);
      string s3(1, op[aux+4]);
      ops[i][cont] = atoi( s.c_str() );
      ops[i][cont+1] = atoi( s2.c_str() );
      ops[i][cont+2] = atoi( s3.c_str() );
      cont= 0;
      aux = 0;
    }

    cout << ops[0][0] << endl;


/*
    for (int i = 0; i < t; i++) {
      string jog;
      getline (cin, jog);
      v.push_back(jog);
    }
*/
  }

  return 0;
}
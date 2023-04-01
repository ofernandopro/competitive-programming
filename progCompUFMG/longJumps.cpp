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

#define f(inicio, fim) for(int i = inicio; i < fim; i++)
#define ff(inicio, fim) for(int j = inicio; j < fim; j++)
#define fff(inicio, fim) for(int k = inicio; k < fim; k++)
#define print(vetor) for(auto elem : vetor) cout << elem << " "

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

using namespace std;

int main() { _
  int t;
  cin >> t;
  while(--t >= 0) {
    int n;
    cin >> n;
    ll a[n];
    ll listSom[n] = {0};

    for(int i = 0; i < n; i++) {
      cin >> a[i];
    }

    for(int i = n-1; i >= 0; i--) {
      int som = i;
      listSom[i] = a[i];
      som += a[i];
      if(som < n) {
        listSom[i] += listSom[som]; 
      }
    }
    
    int res = -1;
    for(int i = 0; i < n; i++) {
      if(res < listSom[i])
        res = listSom[i];
    }

    cout << res << endl;
  }
  return 0;
}
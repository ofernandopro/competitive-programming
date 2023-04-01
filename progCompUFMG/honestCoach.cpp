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

  int t, n;
  cin >> t;
  int aux[100];
    
  while(t--){

    cin >> n;

    for(int i = 0; i < n; i++){
      cin >> aux[i];
    }

    sort(aux, aux + n);

    vector<int> v;
    int diff = 0;

    for(int i = 1; i < n; i++){
      diff = aux[i] - aux[i-1];
      v.push_back(diff);
    }

    sort(v.begin(), v.end());
    cout << v[0] << endl;

  }
  return 0;

}
/*#include <iostream>
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

vector<int> getDivisores(int n) {
    vector<int> v;
    for (int i = 1; i <= sqrt(n); i++) {
      if (n % i == 0) {
        if (n / i == i) {
          //printf("%d ", i);
          v.push_back(i);
        } else {
          //printf("%d ", i);
          v.push_back(i);
          v.push_back(n/i);
        }
      }
    }
    // for (int i = v.size() - 1; i >= 0; i--)
    //     printf("%d ", v[i]);

    return v;
}

bool primeFactors(int n, int size) {
  vector<int> v;
  bool isDespojado = true;

  while (n % 2 == 0) {
    cout << 2 << " ";
    v.push_back(2);
    n = n/2;
  }

  cout << endl;
  for (int i = 3; i <= sqrt(n); i = i + 2) {
    while (n % i == 0) {
      dbg(i);
      v.push_back(i);
      n = n/i;
    }
  }

  cout << endl;
  if (n > 2) {
    dbg(n);
    v.push_back(n);
  }

  cout << endl << endl;
  for (int i = 0; i < v.size(); i++) {
    dbg(v[i]);
  }

  map<int, int> contMap;
  for (auto & elem : v) {
    auto result = contMap.insert(pair<int, int>(elem, 1));
    if (result.second == false)
        result.first->second++;
  }

  dbg(contMap.size());
  for (auto & elem : contMap) {
    dbg(elem.first);
    dbg(elem.second);
    if (elem.second > 1 || size == 1) {
      cout << elem.first << " :: " << elem.second << endl;
      isDespojado = false;
    }
  }

  dbg(isDespojado);

  return isDespojado;

}

int main() { _

  int n;
  cin >> n;

  vector<int> v = getDivisores(n);
  set<int> s;
  int qnt = 0;

  for (int i = 0; i < v.size(); i++) {
    dbg(v[i]);
    s.insert(v[i]);
  }

  for (auto it = s.begin(); it != s.end(); ++it) {
    if (*it != 1) {
      if (primeFactors(*it, s.size())) {
        qnt++;
      }
    }
  }
  cout << endl;
  //   if (*it != 1) {
  // if (primeFactors(*it, s.size())) {
  //     qnt++;
  //   }
  //   }
    
  // }
   cout << qnt << endl;

  // if (n != 1) {
  //   primeFactors(n, s.size());
  // } else {
  //   cout << 0 << endl;
  // } 

  return 0;
}*/

#include <iostream>
#include <math.h>

using namespace std;

int main () {

  unsigned long long N;
  unsigned long long fat = 0, l = 2;
  cin >> N;
  
  while (N > l*l) {
    if (N % l == 0) {
      fat++;
      while (N % l == 0) {
        N /= l;
      }
    }
    l++;
  }

  if (N != 1) {
    fat++;
  }

  cout << (1l << fat) - fat - 1 << endl;

  return 0;
}
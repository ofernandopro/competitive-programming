/*
#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
#include <functional>
#include <vector>
#include <utility> 
#include <iterator>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <math.h>

using namespace std;

int X[1010], Y[1010];
long T[1010][1010];

long pot(long v) { 
  return v*v; 
}

int main() {
  int N;

  while(1) {
    cin >> N;
    if (!N) {
      return 0;
    }
    
    for(int i = 0; i < N; ++i) {
      cin >> X[i];
      cin >> Y[i];
    }
      
    int numSubconjs = 0;
    for(int i = 0; i < N; ++i) {
      int num = 0;
      for(int j = 0; j < N; ++j) {
        T[i][num++] = pot(X[i] - X[j]) + pot(Y[i] - Y[j]);
      }
          
      sort(T[i], T[i] + num);

      long ult = -1L;
      int cont = 0;
      
      for(int j = 0; j < num; ++j) {
        if (T[i][j] != ult) {
          numSubconjs += (cont * (cont - 1)) / 2;
          cont = 0;
        }
        ult = T[i][j];
        cont++;
      }
      numSubconjs += (cont * (cont - 1)) / 2;
    }

    cout << numSubconjs << endl;
  }
  
  return 0;

}

*/

#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
#include <functional>
#include <vector>
#include <utility>
#include <iterator>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <math.h>
#include <unordered_map>

#define dist(A,B) A.distancia(B)

typedef unsigned long long ll;
using namespace std;
int N;

struct ponto {
    ll x,y;
    ponto(ll _x, ll _y): x(_x), y(_y) {}
    ponto() {}
    
    ll distancia(ponto p2) {
        ll pot1 = (p2.x - x) * (p2.x - x);
        ll pot2 = (p2.y - y) * (p2.y - y);
        return pot1+pot2;
    }
};


vector<ponto> pontos;

void getRes() {
    int tam = (int)pontos.size();
    int qnt = 0;
    
    for(int a = 0; a < tam; a++) {
        unordered_map<ll, unsigned> ds;
        
        for(int b = 0; b < tam; b++) {
            if(a == b) continue;
            ds[dist(pontos[a], pontos[b])] ++;
        }
        
        for (auto &&dist: ds){
            unsigned qtt = dist.second;
            qnt += qtt * (qtt - 1) / 2;
        }
    }
    
    cout << qnt << endl;

}

int main() {
    
  while (true) {

    cin >> N;
    if(N == 0) {
      break;
    }

    pontos.clear();
    
    for(int i = 0; i < N; i++) {
      int x, y;
      cin >> x >> y;
      pontos.push_back(ponto(x,y));
    }

    getRes();
  }
  
  return 0;
}

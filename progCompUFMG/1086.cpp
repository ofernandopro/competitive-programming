#include <iostream>
#include <cstring>
#include <vector>
#include <set>

using namespace std;

#define INF 0x3f3f3f3f

int w, n, m;
int list1[10005];
int list2[10005];
set<int> set1;
set<int>::reverse_iterator it;

int getQnt(int val2, int soma, bool tipo) {

  it = set1.rbegin();
  int somaAux, n, cont = 0;
  int i = set1.size() - 1;

  while(val2 && it != set1.rend()) {
    n = *it;
    somaAux = soma-n;
    
    if (somaAux == n) {
      if(tipo) {
        if(list1[n] <= 0 || somaAux < 0 || (list1[somaAux]-1) <= 0) {
          it++; 
          continue;
        }
      } else {
        if(list2[n] <= 0 || somaAux < 0 || (list2[somaAux]-1) <= 0) {
          it++; 
          continue;
        }
      }
    } else {
      if(tipo) {
        if(list1[n] <= 0 || somaAux < 0 || (list1[somaAux]) <= 0) {
          it++; 
          continue;
        }
      } else {
        if(list2[n] <= 0 || somaAux < 0 || list2[somaAux] <= 0) {
          it++; 
          continue;
        }
      }
    }
    
    if(tipo) {
      list1[somaAux]--; 
      list1[n]--;
    } else {
      list2[somaAux]--;
      list2[n]--;
    }

    cont += (somaAux ? 2 : 1);

    val2--;

  }

  int resp;

  if(val2) {
    resp = INF;
  } else {
    resp = cont;
  }

  return resp;

}

int main () {

  int val1, val2;

  while(scanf("%d %d", &n, &m) && (n || m)) {

    memset(list1, 0, sizeof list1); 
    memset(list2, 0, sizeof list2);

    list1[0] = INF;
    list2[0] = INF;

    set1.clear();
    cin >> val1;
    cin >> val2;

    for(int i = 0; i < val2; i++) {
      cin >> w;
      set1.insert(w);
      list1[w]++;
      list2[w]++;
    }

    int maior = INF;

    if((n * 100) % val1 == 0){
      int val = getQnt((n*100)/val1, m, 1);
      maior = min(maior, val);
    }

    if((m * 100) % val1 == 0){
      int val = getQnt((m*100)/val1, n, 0);
      maior = min(maior, val);
    }

    if(maior >= INF || maior < 0) {
      cout << "impossivel" << endl;
    } else {
      cout << maior << endl;
    }
  }

  return 0;
}
#include <bits/stdc++.h>

#define MAX 2000001
using namespace std;

bitset<MAX> bitsetPrimos;
int vecAux[MAX];
int vecRes[MAX];

void getRes() {

  bitsetPrimos.set();
  memset(vecAux, 0, sizeof(vecAux));
  
  for (int i = 2; i < MAX; i++) {
    if (bitsetPrimos[i]) {

      vecAux[i] = 2;
      for (int j = i + i; j < MAX; j += i) {
        bitsetPrimos.reset(j);
        
        int aux = 0;
        int aux2 = j;
        
        while(aux2 % i == 0) {
          aux2 /= i;
          aux++;
        }
        
        if (vecAux[j] == 0) {
          vecAux[j] = aux + 1;
        } else {
          vecAux[j] = vecAux[j] * (aux + 1);
        }
      }
    }
  }
  
  vecRes[1] = 0;
  for (int cont = 2; cont <= MAX; cont++) {
      vecRes[cont] = vecRes[cont - 1];
      if (bitsetPrimos[vecAux[cont]]) {
        vecRes[cont]++;
      }
  }   
}

int main() {
  int N;
  
  getRes();

  while(cin >> N) {
    cout << vecRes[N] << endl;
  }

  return 0;
}
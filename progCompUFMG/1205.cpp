#include <iostream>
#include <cstdio>
#include <queue>
#include <vector>
#include <cmath>

using namespace std;

int main(){

  int N, M, K, A;
  int vistos[1001], sold[1001], pri, ult, aux;
  double P;

  vector<int> grafo[1001];

  while(scanf("%d %d %d %lf", &N, &M, &K, &P) != EOF) {
    aux = 0;

    for(int i = 1; i <= N; i++){
      grafo[i].clear();
      vistos[i] = 0;
      sold[i] = 0;
    }

    while(M--){
      int val1, val2;
      cin >> val1;
      cin >> val2;
      grafo[val1].push_back(val2);
      grafo[val2].push_back(val1);
    }

    priority_queue<pair<int,int> > fila;

    cin >> A;
    while(A--) {
      int prox;
      cin >> prox;
      sold[prox]++;
    }

    cin >> pri;
    cin >> ult;

    fila.push(make_pair(K - sold[pri], pri));

    while(!fila.empty()){
      pair<int,int> prox;
      prox = fila.top();
      fila.pop();

      int balas = prox.first;
      int atual = prox.second;

      if(balas < 0) 
        continue;

      if(atual == ult){
        aux = 1;
        double val = pow(P, K - balas);
        printf("%.3lf\n", val);
        break;
      }

      if(vistos[atual]) continue;
      vistos[atual] = 1;

      for(int i = 0; i < grafo[atual].size(); i++){
        int prox = grafo[atual][i];
        fila.push(make_pair(balas - sold[prox], prox));
      }

    }

    if(!aux) {
      cout << "0.000" << endl;
    }

  }
  return 0;
}
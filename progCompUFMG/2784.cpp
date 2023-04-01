#include <iostream>
#include <vector>

using namespace std;

#define _ ios_base::sync_with_stdio(false);

const int INF = 0x3f3f3f3f;
int N, M, S;
vector<vector<pair<int, int> > > ilhas;
vector<bool> listVisitados;
vector<int> pings;

void getDiferencaPing(int vertice) {
  listVisitados[vertice] = true;

  for (int i = 0; i < ilhas[vertice].size(); i++) {
    if(!listVisitados[ilhas[vertice][i].first]) {
      pings[ilhas[vertice][i].first] = min(pings[ilhas[vertice][i].first], pings[vertice] + ilhas[vertice][i].second);
    }
  }

  int proximo = 0;
  int menorPing = INF;
  for(int i = 1; i < N + 1; i++) {
    if(!listVisitados[i] && pings[i] < menorPing){
      proximo = i;
      menorPing = pings[i];
    }
  }

  if(proximo != 0) {
    getDiferencaPing(proximo);
  }

}

int main() { _

  cin >> N >> M;
  ilhas.resize(N + 1);
  listVisitados.assign(N + 1, false);
  pings.assign(N + 1, INF);

  for(int i = 0; i < M; i++) {
    int Ui, Vi, Pi;
    cin >> Ui >> Vi >> Pi;
    ilhas[Ui].push_back(make_pair(Vi, Pi));
    ilhas[Vi].push_back(make_pair(Ui, Pi));
  }

  cin >> S;
  pings[S] = 0;
  getDiferencaPing(S);

  int maiorPing = 0, menorPing = INF;

  for(int i = 1; i < pings.size(); i++) {
    if(i != S){
      maiorPing = max(maiorPing, pings[i]);
      menorPing = min(menorPing, pings[i]);
    }
  }
  
  cout << maiorPing - menorPing << endl;

  return 0;

}
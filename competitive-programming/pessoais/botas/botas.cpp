#include <iostream>
#include <string>
#include <algorithm> // sort, funções de max e min, count
#include <vector>
#include <utility> // pair
#include <iterator>
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

  int n;
  cin >> n;

  vector<pair<int, int> > botas; // {E,D}
  for (int i = 0; i <= 60; i++) { // Inicializando todos os valores do vector de pair como 0
    pair<int, int> p;
    p.first = 0; p.second = 0;
    botas.push_back(p);
  }

  for (int i=0; i < n; i++) {
    int tam;
    cin >> tam;
    char pe;
    cin >> pe;

    if (pe == 'E') botas[tam].first++;
    else botas[tam].second++;
  }

  int resposta = 0;

  for (int i = 0; i < botas.size(); i++)
    resposta += min(botas[i].first, botas[i].second);

  cout << resposta << endl;

  return 0;
}
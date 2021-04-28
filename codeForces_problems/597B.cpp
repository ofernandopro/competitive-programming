#include <iostream>
#include <algorithm> // sort, funções de max e min
#include <vector>

using namespace std;

bool comparacao(pair<int, int> & left, pair<int, int> & right)
{ // Ordena pelo segundo elemento (second) de cada pair
    return left.second < right.second;
}

int main() {

  int n; cin >> n;
  vector<pair<int, int> > v;
  vector<pair<int, int> > ans;

  for (int i = 0; i < n; i++) {
    pair<int, int> p;
    cin >> p.first >> p.second;
    v.push_back(p);
  }

  sort(v.begin(), v.end(), comparacao);

  ans.push_back(v[0]);
  int cont = 0;

  for (int i = 0; i < n-1; i++) {
    if (v[i+1].first > ans[cont].second) {
      ans.push_back(v[i+1]);
      cont++;
    }
  }

  cout << cont+1 << endl;

  return 0;
}
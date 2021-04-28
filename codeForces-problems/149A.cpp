#include <iostream>
#include <algorithm> // sort, funções de max e min
#include <functional> // greater
#include <vector>

using namespace std;

int main() {

  int n, a, soma = 0, cont = 0;
  cin >> n;
  vector<int> v;

  for (int i = 0; i < 12; i++) {
    cin >> a;
    v.push_back(a);
  }

  sort(v.begin(), v.end(), greater<int>());

  for (int i = 0; i < v.size(); i++) {
    if(soma < n) {
      soma += v[i];
      cont++;
    } else {
      break;
    }
  }

  if (soma >= n)
    cout << cont << endl;
  else
    cout << -1 << endl;

  return 0;
}
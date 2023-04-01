#include <iostream>
#include <vector>

using namespace std;

int main() {

  int n, r, index, cont = 0;
  cin >> n;
  vector<int> v;

  for (int i = 0; i < n; i++) {
    cin >> r;
    v.push_back(r);
  }

  for (int i = 0; i < v.size()-1; i++) {
    if (v[i] > v[i+1]) {
      index = i + 1;
      break;
    }
    cont++;
  }

  if (cont == v.size()-1)
    cout << 0 << endl;
  else cout << index + 1 << endl;

  return 0;
}
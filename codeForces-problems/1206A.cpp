#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main() {

  int a, b, x;
  cin >> a;
  vector<int> v1;
  for(int i = 0; i < a; i++) {
    cin >> x;
    v1.push_back(x);
  }

  cin >> b;
  vector<int> v2;
  for(int i = 0; i < b; i++) {
    cin >> x;
    v2.push_back(x);
  }

  sort(v1.begin(), v1.end());
  sort(v2.begin(), v2.end());

  cout << v1[v1.size()-1] << " " << v2[v2.size()-1] << endl;

  return 0;
}


/*
int main() {

  int a, b, x;
  cin >> a;
  vector<int> v1;
  for(int i = 0; i < a; i++) {
    cin >> x;
    v1.push_back(x);
  }

  cin >> b;
  vector<int> v2;
  for(int i = 0; i < b; i++) {
    cin >> x;
    v2.push_back(x);
  }

  set<int> setSomas;

  for (int i = 0; i < a; i++) {
    setSomas.insert(v1[i]);
  }
  for (int j = 0; j < b; j++) {
    setSomas.insert(v2[j]);
  }

  vector<int> v(setSomas.begin(), setSomas.end());
  bool achou = true;

  int i = 0, j = 0;

  while (i < a && achou == true) {
    while (j < b && achou == true) {

      int count = 0;
      for (int k = 0; k < v.size(); k++) {
        if (v1[i]+v2[j] != v[k]) count++;
      }

      if (count == v.size()) {
        cout << v1[i] << " " << v2[j] << endl;
        achou = false; // Necessário para sair dos dois loops
        break;
      }
      j++;
    }
    i++;
  }


  return 0;
}
*/
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {

  int n; cin >> n;
  int cont, aux = 0;
  string p;
  vector<string> v;

  for (int i = 0; i < n; i++) {
    v.clear();
    for (int j = 0; j < 3; j++) { // Lê as 3 strings e as coloca no vector v
      cin >> p;
      v.push_back(p);
    }

    cont = 0; // Conta quantas letras podem ser trocadas
    for (int j = 0; j < v[0].size(); j++) {
      if(v[2][j] != v[1][j] && v[2][j] != v[0][j]) {
        cout << "NO" << endl;
        break;
      } else {
        cont++;
      }
    }
    if (cont == v[0].size()) cout << "YES" << endl;

  }
  
  return 0;
}

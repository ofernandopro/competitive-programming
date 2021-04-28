#include <iostream>

using namespace std;

int main() {

  int n, i, v, maior;

  while (cin >> n) {

    int niv[n];
    maior = 0;
    
    for (i = 0; i < n; i++) {
      cin >> v;
      if (v < 10) niv[i] = 1;
      else if (v < 20) niv[i] = 2;
      else if (v >= 20) niv[i] = 3;
    }

    for (i = 0; i < n; i++) {
      if (niv[i] > maior) maior = niv[i];
    }

    cout << maior << endl;

  }

  return 0;
}
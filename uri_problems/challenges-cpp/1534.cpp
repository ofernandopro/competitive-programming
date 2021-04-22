#include <iostream>

using namespace std;

int main() {

  int n, i, j, cont = 0;

  while (cin >> n) {
    int m[n][n];
    
    for (i = 0; i < n; i++) {
      for (j = 0; j < n; j++) {
        m[i][j] = 3;
      }
    }

    for (i = 0; i < n; i++) {
      for (j = 0; j < n; j++) {
        if (i == j) {
          m[i][j] = 1;
        }
        if (i + j == n-1) {
          m[i][j] = 2;
        }
      }
    }

    // Imprime a matriz:
    cont++;
    if (cont != 1) cout << endl;
    for (i = 0; i < n; i++) {
      for (j = 0; j < n; j++) {
        cout << m[i][j];
      }
      if (i != n-1) cout << '\n';
    }

  }

  return 0;
}
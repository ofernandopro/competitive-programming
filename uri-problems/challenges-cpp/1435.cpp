#include <iostream>
#include <math.h>

using namespace std;

int main() {

  int n, i, j, aux = 1, cont = 0;
  int u, p;

  do {
    cin >> n;
    if (n == 0) break;
    int m[n][n];
    u = n-1;
    p = 0;
    aux = 1;

    if(aux == 1) {
      for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
          m[i][j] = 0;
        }
      }
    }

    for (i = 0; i < n; i++) {
      if (p > u) break;
      for (j = 0; j < n; j++) {
        if (m[p][j] == 0) m[p][j] = aux; // Linha 0
        if (m[j][p] == 0) m[j][p] = aux; // Coluna 0
        if (m[u][j] == 0) m[u][j] = aux; // Linha n
        if (m[j][u] == 0) m[j][u] = aux; // Coluna n
      }
      u--;
      p++;
      aux++;
    }
    cont++;
    if (cont != 1) cout << endl;
    for (i = 0; i < n; i++) {
      for (j = 0; j < n; j++) {
        cout << m[i][j];
        if (j != n-1) cout << "   ";
      }
      cout << endl;
    }


  } while (n != 0);

  return 0;
}
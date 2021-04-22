#include <iostream>

using namespace std;

int main() {

  int n, i, j, cont = 0;

  do {
    cin >> n;
    if (n == 0) break;
    int m[n][n];

    for (i = 0; i < n; i++) {
      for (j = 0; j < n; j++) {
        if (i == j) {
          m[i][j] = 1;
        } else if (j > i) {
          m[i][j] = j - i + 1;
        } else {
          m[i][j] = i - j + 1;
        }
      }
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
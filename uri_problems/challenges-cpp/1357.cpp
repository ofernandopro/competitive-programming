#include <iostream>

using namespace std;

int main() {

  int n, i, j, k;
  char l;

  while (n != 0) {

    cin >> n;
    cin >> l;
    int dec[n];
    char bra[3][2];

    if (l == 'S') {

      // Lê número decimal:
      for (i = 0; i < n; i++) {
        cin >> dec[i];

        if (dec[i] == 0) {
          char b[3][2] = { {'.', '*'}, {'*', '*'}, {'.', '.'}};
        }

      }

    } else {

      for (k = 0; k < n; k++) {

        // Lê matriz em braile
        for (i = 0; i < 3; i++) {
          for (j = 0; j < 2; j++) {
            cin >> bra[i][j];
          }
        }

      }

    }
 


  }


  return 0;
}
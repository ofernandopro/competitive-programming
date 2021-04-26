#include <iostream>

using namespace std;

int main() {

  int n, m;
  cin >> n >> m;
  int t[n][m];

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> t[i][j];
    }
  }

  int linha = 0, coluna = 0;

  for (int i = 0; i < n-2; i++) {
    for (int j = 0; j < m-2; j++) {
      if (t[i][j] == 7 && t[i][j+1] == 7 && t[i][j+2] == 7) {
        if (t[i+1][j] == 7 && t[i+1][j+1] == 42 && t[i+1][j+2] == 7) {
          if (t[i+2][j] == 7 && t[i+2][j+1] == 7 && t[i+2][j+2] == 7) {
            linha = i+2;
            coluna = j+2;
          }  
        }
      }
    }
  }

  cout << linha << " " << coluna << endl;

  return 0;
}
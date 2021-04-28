#include <iostream>
#include <algorithm>
#include <vector>

/**
 * 
 * Geralmente, se o código realiza menos que 10ˆ9 operações,
 * ele vai passar no tempo. Isso pode variar, mas é quase sempre assim.
 * 
 */

using namespace std;

int main() {

  int n, i, j, k; // O(1)
  cin >> n; // O(1)
  int a[n][n], b[n][n], c[n][n];

  cout << n << endl; // O(1)

  for (i = 0; i < n; i++) { // Multiplicação de 2 matrizes: O(nˆ3)
    for (j = 0; j < n; j++) {
      for (k = 0; k < n; k++) {
        c[i][j] += a[i][k] * b[k][j];
      }
    }
  }

  vector<int> v1, v2;
  v1.push_back(2); v1.push_back(3); v1.push_back(1);
  v2.push_back(2); v2.push_back(3); v2.push_back(1);

  sort(v1.begin(), v1.end()); // O(nlog(n))

  return 0;
}
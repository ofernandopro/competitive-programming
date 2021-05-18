#include <iostream>
#include <vector>
const int INF = 0x3f3f3f3f;

using namespace std;

int main() {

  int n, m, soma = 0, j, i;
  cin >> n >> m;
  int celulas[n][m];
  vector<int> p;

  for (i = 0; i < n; i++) {
    for (j = 0; j < m; j++) {
      cin >> celulas[i][j];
    }
  }

  j = 0, i = 0;
  while (j < m) {
    soma = soma + celulas[i][j];
    if (j == m-1 && i == n) {
      break;
    } else {
      if (j == m-1) {
        j = 0; // Volta primeira coluna
        i++; // Pula próxima linha
        p.push_back(soma);
        soma = 0;
      } else {
        j++;
      }
    }
  }

  j = 0, i = 0, soma = 0;
  while (i < n) {
    soma = soma + celulas[i][j];
    if (j == m && i == n-1) {
      break;
    } else {
      if (i == n-1) { // Se chegou ao final da coluna j
        i = 0; // Volta pra primeira linha
        j++; // Pula pra próxima coluna
        p.push_back(soma);
        soma = 0;
      } else {
        i++;
      }
    }
  }

  int maior = -INF;
  for (int i = 0; i < p.size(); i++) {
    if (p[i] > maior) maior = p[i];
  }

  cout << maior << endl;

  return 0;
}
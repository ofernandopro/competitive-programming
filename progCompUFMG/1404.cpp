#include <iostream>

using namespace std;

int N, M;
int tabuleiro[20][20];
bool visitados[20][20];

bool isValida(int x, int y, int a, int b) {
	return (x < N && y < M && x >= 0 && y >= 0 && !visitados[a][b] && tabuleiro[x][y] == 0 && tabuleiro[a][b] == 2);
}

int getMaiorNum(int x, int y) {	
	int maiorNum = 0;

  if (isValida(x - 2, y + 2, x - 1, y + 1)) {
		visitados[x - 1][y + 1] = true;
		maiorNum = max(1 + getMaiorNum(x - 2, y + 2), maiorNum);
		visitados[x - 1][y + 1] = false;
	}

	if (isValida(x + 2, y + 2, x + 1, y + 1)) {
		visitados[x + 1][y + 1] = true;
		maiorNum = max(1 + getMaiorNum(x + 2, y + 2), maiorNum);
		visitados[x + 1][y + 1] = false;
	}

  if (isValida(x - 2, y - 2, x - 1, y - 1)) {
		visitados[x - 1][y - 1] = true;
		maiorNum = max(1 + getMaiorNum(x - 2, y - 2), maiorNum);
		visitados[x - 1][y - 1] = false;
	}
	
  if (isValida(x + 2, y - 2, x + 1, y - 1)) {
		visitados[x + 1][y - 1] = true;
		maiorNum = max(1 + getMaiorNum(x + 2, y - 2), maiorNum);
		visitados[x + 1][y - 1] = false;
	}

	return maiorNum;
}

int main() {

	while(cin >> N >> M) {

		if (M == 0 && N == 0) {
      break;
    }
		
		for (int i = 0; i < N; i++) {
			for (int j = (i % 2); j < M; j += 2) {
				cin >> tabuleiro[i][j];
			}
		}
		
		int total = 0;
		for (int i = 0; i < N; i++)	{
			for (int j = (i % 2); j < M; j += 2) {
				if (tabuleiro[i][j] == 1)	{
					tabuleiro[i][j] = 0;
					total = max(getMaiorNum(i, j), total);
					tabuleiro[i][j] = 1;
				}
			}
		}
		cout << total << endl;
	}
	return 0;
}
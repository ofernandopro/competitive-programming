#include <iostream>
#include <string>
#include <algorithm> // sort, funções de max e min
#include <functional> // greater
#include <vector>
#include <utility> // pair
#include <iterator>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <math.h>

using namespace std;

int main() {

	int c, N, K, X, Y, R;
  int matriz[60][110];
	
	cin >> c;

	while(c--) {

		cin >> N;

		for (int i = 0; i < N; i++) {
      matriz[i][0] = 0;
    }
		
		for (int i = 0; i <= 100; i++) {
			matriz[0][i] = 0;
    }

		for (int i = 1; i <= N; i++) {
			cin >> X >> Y;
			for (int j = 1; j <= 101; j++) {
				if (j < Y) {
          matriz[i][j] = matriz[i - 1][j];
        } else {
					matriz[i][j] = max(matriz[i-1][j], matriz[i - 1][j - Y] + X);
        }
			}
		}

		cin >> K;
    cin >> R;
    
		if (matriz[N][K] >= R) {
      cout << "Missao completada com sucesso" << endl;
    } else {
      cout << "Falha na missao" << endl;
    }

	}

  return 0;
}
#include <iostream>
#include <stdlib.h>

int v[1020];
int matriz[1020][1020];

using namespace std;

int main() {

    int N, aux;

    while (scanf("%d", &N), N) {

        N = N * 2;

        for (int i = 0; i < N; ++i) {
          cin >> v[i];
        }

        for (int i = 0; i < N; ++i) {
          for (int j = 0; j + i < N; ++j) {
            aux = i + j;

            if (i == 0) {
              matriz[j][aux] = 0;
            }

            if (i % 2 == 0) {
              matriz[j][aux] = min(matriz[j + 1][aux], matriz[j][aux -1]);
            } else {
              matriz[j][aux] = max(matriz[j + 1][aux] + (v[j] % 2 == 0 ? 1 : 0), matriz[j][aux - 1] + (v[aux] % 2 == 0 ? 1 : 0));
            }
          }
        }

        cout << matriz[0][N - 1] << endl;
    }

    return 0;
}
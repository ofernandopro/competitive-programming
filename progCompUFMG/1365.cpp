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

#define INF 0x3F3F3F3F

int R, C, K;
int matriz[310][310], vAux[310];

int main() {
	while(scanf("%d %d %d", &R, &C, &K) && (R+C+K)) {
		for(int i = 0; i < R; i++) {
			for(int j = 0; j < C; j++) {
				char X;
				cin >> X;
				matriz[i][j] = (X =='.');
			}
		}

		int res = INF;
		for(int i = 0; i < R; i++) {
			for(int j = 0; j < C; j++) {
				vAux[j] = 0;
      }
			for(int j = i; j < R; j++) {
				for(int p = 0; p < C; p++) {
					vAux[p] += matriz[j][p];
        }
				int soma = 0;
				for(int p = 0, R = 0; R < C; R++) {
					soma += vAux[R];
					while(p < R && soma-vAux[p] >= K) {
						soma -= vAux[p++];
          }
					if(soma >= K) {
						res = min(res, (abs(p-R)+1)*(abs(i-j)+1));
          }
				}
			}
		}
		cout << res << endl;
	}
	return 0;
}
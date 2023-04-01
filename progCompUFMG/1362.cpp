#include <iostream>
#include <cstring>
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

const int INF = 0x3f3f3f3f;

bool getBFS(int x, int y, int pai[], int mat[500][500]) {
	bool aux[500];
	memset(aux, 0, sizeof aux);
	
	queue<int> q1;
	q1.push(x);

	pai[x] = -1;
	aux[x] = true;
	
	while(!q1.empty()) {
		int front = q1.front();
		q1.pop();
		for(int i = 0; i < 500; ++i) {
			if(!aux[i] && mat[front][i] > 0) {
				aux[i] = true;
				pai[i] = front;
				q1.push(i);
			}
		}
	}
	return (aux[y] == true);
}

int getIfIsPossible(int grafo[500][500], int val1, int val2) {
	int x;
	int mat[500][500];

	for(int i = 0; i < 500; ++i) {
		for(int j = 0; j < 500; ++j) {
			mat[i][j] = grafo[i][j];
    }
  }

	int pai[500], max = 0;
	while(getBFS(val1, val2, pai, mat)) {
		int cam = INF;

		for(int i = val2; i != val1; i = pai[i]) {
			x = pai[i];
			cam = min(cam, mat[x][i]);
		}

		for(int i = val2; i != val1; i = pai[i]) {
			x = pai[i];
			mat[x][i] -= cam;
			mat[i][x] += cam;
		}
		max += cam;
	}

	return max;
}

int main(){

  int grafo[500][500];
	int N, M, num, soc;
	map<string, int> tams;

	tams["XXL"] = 1, tams["XL"] = 2, tams["L"] = 3, tams["M"] = 4, tams["S"] = 5, tams["XS"] = 6;

	cin >> num;

	while(num--) {
		cin >> N >> M;
		memset(grafo, 0, sizeof grafo);
		soc = N / 6;

		for(int i = 1; i <= 6; ++i) {
			grafo[0][i] = soc;
		}

		for(int i = 1; i <= M; ++i) {
			string a, b;
			cin >> a >> b;

			grafo[tams[a]][6 + i] = 1;
			grafo[6 + i][tams[a]] = 1;
			grafo[6 + i][tams[b]] = 1;
			grafo[tams[b]][6 + i] = 1;
			grafo[6 + i][M + 7] = 1;
			grafo[M + 7][6 + 1] = 1;
		}

		int res = getIfIsPossible(grafo, 0, M+7);

		if(M == res) {
			cout << "YES" << endl;
    } else {
			cout << "NO" << endl;
    }
	}
	return 0;
}	
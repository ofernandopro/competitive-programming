#include <iostream>
#include <vector>

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

using namespace std;

bool checkDiferente(int *iniVals, int *atual, int m) {
	for(int i = 0; i < m; i++) {
		if(iniVals[i] != atual[i]) {
			return true;
		}
	}
	return false;
}
 
bool checkDesligado(int *atual, int m) {
	for(int i = 0; i < m; i++) {
		if(atual[i] != -1) {
			return false;
		}
	}
	return true;
}

int main() { _

  int N, M;
  int L, Xi, Ki, Yi, numVezes;

	cin >> N >> M;

  vector<int> interrup[N];
	int lamps[M], iniVals[M];

	for(int i = 0; i < M; i++) {
		lamps[i] = -1;
	}

	cin >> L;
	for(int i = 0; i < L; i++) {
		cin >> Xi;
		lamps[Xi-1] *= -1;
	}

	for(int i = 0; i < N; i++) {
		cin >> Ki;
		for(int j = 0; j < Ki; j++) {
			cin >> Yi;
			interrup[i].push_back(Yi - 1);
		}
	}

	for(int i = 0; i < M; i++) {
		iniVals[i] = lamps[i];
	}

	numVezes = 0;
  bool isDesligado = checkDesligado(lamps, M);
	if(isDesligado) {
		cout << 0 << endl;
		return 0;
	}
	
	do {
		for(int i = 0; i < N; i++) {
			for(int j = 0; j < interrup[i].size(); j++) {
				lamps[interrup[i][j]] *= -1;
			}

			numVezes++;
      bool isDesligado = checkDesligado(lamps, M);

			if(isDesligado) {
				cout << numVezes << endl; 
				return 0;
			}
		}
	} while(checkDiferente(iniVals, lamps, M));

	cout << "-1" << endl;

  return 0;
}
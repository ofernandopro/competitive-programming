#include <iostream>

using namespace std;

int main() {

	int N;
	int alturaMax = 0, A[50002];
	cin >> N;

	A[0] = 0;
	A[N+1] = 0;

	for(int i = 1; i <= N; i++) {
		cin >> A[i];
		if (A[i] > A[i-1]) {
			A[i] = A[i-1] + 1;
		}
	}

	for(int i = N; i >= 1; i--) {
		if (A[i] > A[i+1]) {
			A[i] = A[i+1] + 1;
		}
	}

	for(int i = 0; i <= N; i++) {
		if (A[i] > alturaMax) {
			alturaMax = A[i];
		}
	}

	cout << alturaMax << endl;

	return 0;

}
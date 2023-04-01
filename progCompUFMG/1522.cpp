#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
#include <functional>
#include <vector>
#include <utility>
#include <iterator>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <math.h>

using namespace std;

map<string, int> m1;

int N;

int matriz[3][102];

bool canWin(int A, int B, int C)  {
	string s1;
	s1.push_back(A + '0');
	s1.push_back(B + '0');
	s1.push_back(C + '0');
	
	if(A == B && B == C && C == N){
		m1[s1] = 1; 
		return true;
	}
	
	int aux = m1[s1];
	
	if (aux > 0) {
		return (aux == 1? true : false);
	}
	if(A < N && matriz[0][A]%3 == 0 && canWin(A+1, B, C)) {
		m1[s1] = 1; 
		return true;
	}
	if(B < N && matriz[1][B]%3 == 0 && canWin(A, B+1, C)) {
		m1[s1] = 1; 
		return true;
	}
	if(C < N && matriz[2][C]%3 == 0 && canWin(A, B, C+1)) {
		m1[s1] = 1; 
		return true;
	}
	if(A < N && B < N && (matriz[0][A]+matriz[1][B])%3 == 0 && canWin(A+1, B+1, C)) {
		m1[s1] = 1; 
		return true;
	}
	if(A < N && C < N && (matriz[0][A]+matriz[2][C])%3 == 0 && canWin(A+1, B, C+1)) {
		m1[s1] = 1; 
		return true;
	}
	if(B < N && C < N && (matriz[1][B]+matriz[2][C])%3 == 0 && canWin(A, B+1, C+1)) {
		m1[s1] = 1; 
		return true;
	}
	if(A < N && B < N && C < N && (matriz[0][A]+matriz[1][B]+matriz[2][C])%3 == 0 && canWin(A+1, B+1, C+1)) {
		m1[s1] = 1; 
		return true;
	}
	
	m1[s1] = 2;
	return false;
}

int main() {
	while(1) {

		cin >> N;

		if (!N) {
			return 0;
		}
		
		for (int i = 0 ; i < N; i++) {
			for (int j = 0 ; j < 3; j++) {
				cin >> matriz[j][i];
			}
		}
		
		if (canWin(0,0,0)) {
			cout << "1" << endl;
		} else {
			cout << "0" << endl;
		}
		m1.clear();
	}

  return 0;
}
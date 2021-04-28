#include <iostream>

using namespace std;

int main() {

  int n, i;
  long long j; // long long pois vamos trabalhar com números inteiros muito grandes
  cin >> n;

  for (i = 0; i < n; i++) {

    long long x; cin >> x;

    bool primo = true;

    for(j = 2; j*j <= x; j++) { // j*j pois trabalhar com inteiros é melhor
      if (x % j == 0) primo = false;
    }

    if(primo) cout << "Prime" << endl; 
    else cout << "Not Prime" << endl; 

  }

  return 0;
}
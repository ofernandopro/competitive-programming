#include <iostream>

using namespace std;

int main(){

  int n, i, j;
  cin >> n;

  int x[n];

  for (i = 0; i < n; i++) {
    cin >> x[i];
  }

  for (i = 0; i < n; i++) {
    if(x[i] == 0) {
      cout << "Fib(" << x[i] << ") = " << 0 << endl;
    } else if(x[i] == 1) {
      cout << "Fib(" << x[i] << ") = " << 1 << endl;
    } else {
      int fib[x[i]];
      fib[0] = 0;
      fib[1] = 1;
      for (j = 0; j < x[i]-2; j++) {
        fib[j+2] = fib[j+1] + fib[j];
      }
      cout << "Fib(" << x[i] << ") = " << fib[j+2] << endl;
    }

  }

  return 0;

}
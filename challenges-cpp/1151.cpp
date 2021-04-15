#include <iostream>

using namespace std;

int main(){

  int n, i;
  cin >> n;
  int fib[n];
  fib[0] = 0;
  fib[1] = 1;

  cout << fib[0] << " " << fib[1] << " ";

  for (i = 0; i < n-2; i++) {
    fib[i+2] = fib[i+1] + fib[i];
    cout << fib[i+2];
    if(i != n-3) cout << " ";
  }

  cout << endl;

  return 0;

}
#include <iostream>

using namespace std;

int main() {

  int n, i;
  cin >> n;

  for (i = 0; i < n; i++) {
    cout << "Ho";
    if (i != n-1) cout << " ";
    else cout << "!\n";
  }

  return 0;
}
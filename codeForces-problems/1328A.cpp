#include <iostream>

using namespace std;

int main() {

  int t, a, b;
  cin >> t;

  for (int i = 0; i < t; i++) {

    cin >> a >> b;
    int aux = a;
    if (a % b == 0) cout << 0 << endl;
    else if (a < b) cout << b - a << endl;
    else {
      int ceil = (a/b + 1) * b;
      cout << ceil - a << endl;
    }

  }

  return 0;
}
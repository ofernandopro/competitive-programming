#include <iostream>

using namespace std;

bool isEven (int n) {
  if (n % 2 == 0) return true;
  else return false;
}

int main() {

  int q, n;
  cin >> q;

  for (int i = 0; i < q; i++) {

    cin >> n;

    if (n == 2) {
      cout << 2 << endl;
    } else if (isEven(n)) {
      cout << 0 << endl;
    } else {
      cout << 1 << endl;
    }

  }

  return 0;
}
#include <iostream>

using namespace std;

int main() {

  int p, s, t;

  cin >> p >> s >> t;

  if (s-p >= t-s && t == s) {
    cout << ":(" << endl;
  } else {
    cout << ":)" << endl;
  }

  return 0;
}
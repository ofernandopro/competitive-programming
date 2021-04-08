#include <iostream>

using namespace std;

int main () {

  int i, numero;

  cin >> numero;

  for (i = 1; i <= numero; i++) {
    if (i % 2 != 0)
      cout << i << endl;
  }

  return 0;
}
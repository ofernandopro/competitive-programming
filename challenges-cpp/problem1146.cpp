#include <iostream>

using namespace std;

int main(){

  int x, i;

  do {
    cin >> x;

    for (i = 1; i <= x; i++) {
      cout << i;
      if (i != x) cout << " ";
    }

    if (x != 0) cout << endl;

  } while (x != 0);

  return 0;

}
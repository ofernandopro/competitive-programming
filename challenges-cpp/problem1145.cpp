#include <iostream>

using namespace std;

int main(){

  int x, y, i = 1, j = 1, cont;
  cin >> x >> y;

  while (j < y) {

    for (cont = i; cont <= i + x - 1; cont++) {
      cout << cont;
      if (cont != i + x - 1) cout << " ";
    }
    cout << endl;

    i += x;
    j += x;

  }

  return 0;

}
#include <iostream>

using namespace std;

int main(){

  int x = 0, y = 1, soma;

  while (x != y) {

    cin >> x >> y;

    if (x == y) break;

    if (x > y) cout << "Decrescente" << endl;
    else cout << "Crescente" << endl;

  }

  return 0;
}
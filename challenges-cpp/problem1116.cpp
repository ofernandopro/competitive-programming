#include <iostream>
#include <iomanip>

using namespace std;

int main(){

  int n, i;
  float x, y;

  cin >> n;

  for (i = 0; i < n; i++) {

    cin >> x >> y;

    if (y == 0) cout << "divisao impossivel" << endl;
    else {
      cout << fixed << setprecision(1) << x / y << endl;
    }

  }

  return 0;
}
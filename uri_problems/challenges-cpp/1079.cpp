#include <iostream>
#include <iomanip>

using namespace std;

int main () {

  int n, i;
  float a, b, c; 
  cout << fixed << setprecision(1);
  cin >> n;

  for (i = 0; i < n; i++) {
    cin >> a >> b >> c;
    cout << fixed << setprecision(1) << (a*2 + b*3 + c*5) / 10 << endl;
  }

  return 0;
}
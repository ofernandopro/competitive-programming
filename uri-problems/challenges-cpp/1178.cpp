#include <iostream>
#include <iomanip>

using namespace std;

int main(){

  double x, n[100];
  int i;
  cout << fixed << setprecision(4);
  cin >> x;
  n[0] = x;

  for (i = 1; i < 100; i++) {
    n[i] = n[i-1] / 2;
  }

  for (i = 0; i < 100; i++) {
    cout << "N[" << i << "] = " << fixed << setprecision(4) << n[i] << endl;
  }
 
  return 0;

}
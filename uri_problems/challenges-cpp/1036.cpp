#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
  double A, B, C;
  double R1, R2;

  cout << fixed << setprecision(1);
  cin >> A >> B >> C;

  if(A != 0 && (pow(B, 2) - 4*A*C) >= 0){
    R1 = (-B + sqrt(pow(B, 2) - 4*A*C)) / (2*A);
    R2 = (-B - sqrt(pow(B, 2) - 4*A*C)) / (2*A);
    cout << "R1 = " << fixed << setprecision(5) << R1 << endl;
    cout << "R2 = " << fixed << setprecision(5) << R2 << endl;
  } else {
    cout << "Impossivel calcular" << endl;
  }

  return 0;
}

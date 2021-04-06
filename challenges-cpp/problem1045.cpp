#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

  float x;
  vector<float> v;

  for (int i = 0; i < 3; ++i)
  {
      cin >> x;
      v.push_back(x);
  }

  sort(v.begin(), v.begin() + 3);
  float A, B, C;

  C = v[0];
  B = v[1];
  A = v[2];

  if (A >= B + C) {
    cout << "NAO FORMA TRIANGULO" << endl;
  } else {
    if(pow(A, 2) == pow(B, 2) + pow(C, 2)) {
      cout << "TRIANGULO RETANGULO" << endl;
    } else if (pow(A, 2) > pow(B, 2) + pow(C, 2)) {
      cout << "TRIANGULO OBTUSANGULO" << endl;
    } else if (pow(A, 2) < pow(B, 2) + pow(C, 2)) {
      cout << "TRIANGULO ACUTANGULO" << endl;
    }

    if (A == B && A == C) {
      cout << "TRIANGULO EQUILATERO" << endl;
    }
    if ((A == B && A != C) || (A == C && A != B) || (B == C && B != A)) {
      cout << "TRIANGULO ISOSCELES" << endl;
    }
  }

  return 0;

}
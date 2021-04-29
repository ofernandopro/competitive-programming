#include <iostream>
#include <math.h>

using namespace std;

int main() {

  int xf, yf, xi, yi, vi, r1, r2;

  while (cin >> xf >> yf >> xi >> yi >> vi >> r1 >> r2){

    float t = 0;

    float dist = sqrt(pow(xf-xi, 2) + pow(yf-yi, 2));

    if(vi > 0) t = 1.5;
    
    if(r1+r2 >= dist + vi + t)
      cout << "Y" << endl;
    else 
      cout << "N" << endl;
  
  }

  return 0;
}
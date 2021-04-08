#include <iostream>

using namespace std;

int main () {

  int numero; 
  cin >> numero;
  
  int i;

  for (i = 1; i <= numero; i++) {
    if (i % 2 == 0)
      cout << i << "^2" << " = " << i*i << endl;
  }

  return 0;

}
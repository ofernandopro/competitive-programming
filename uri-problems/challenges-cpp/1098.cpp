#include <iostream>

using namespace std;

int main(){

  float i = 0, j = 7;
  int cont = 0;

  while (i <= 9) {
    cont++;
    cout << "I=" << i << " J=" << j << endl;
    if(cont % 3 == 0) {
      i = i + 0.2;
      j = j + 4;
    } else {
      j = j - 1;
    }
  }

  return 0;
}
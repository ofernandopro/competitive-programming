#include <iostream>

using namespace std;

int main(){

  int i = 1, j = 7, cont = 0;

  while (i <= 9) {
    cont++;
    cout << "I=" << i << " J=" << j << endl;
    if(cont % 3 == 0) {
      i = i + 2;
      j = 7;
    } else {
      j = j - 1;
    }
  }

  return 0;
}
#include <iostream>

using namespace std;

int main () {

  int numero;

  cin >> numero;

  int i = numero, counter = 0;

  while (counter < 6) {
    if (i % 2 != 0){
      cout << i << endl;
      counter++;
    }
    i++;
  }

  return 0;
}
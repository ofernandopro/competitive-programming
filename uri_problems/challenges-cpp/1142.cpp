#include <iostream>

using namespace std;

int main(){

  int n, i, j, aux = 1;
  cin >> n;

  for (i = 0; i < n; i++) {
    for (j = aux; j <= aux + 2; j++) {
      cout << j << " ";    
    }
    aux = j + 1;
    cout << "PUM" << endl;
  }

  return 0;

}
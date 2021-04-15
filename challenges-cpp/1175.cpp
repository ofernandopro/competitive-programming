#include <iostream>

using namespace std;

int main(){

  int i, ultimo = 19, aux;
  int x[20];

  for(i = 0; i < 20; i++) {
    cin >> x[i];
  }

  for(i = 0; i < 10; i++) {
    aux = x[ultimo];
    x[ultimo] = x[i];
    x[i] = aux; 
    ultimo--;
  }

  for(i = 0; i < 20; i++) {
    cout << "N[" << i << "] = " << x[i] << endl;
  }

  return 0;

}
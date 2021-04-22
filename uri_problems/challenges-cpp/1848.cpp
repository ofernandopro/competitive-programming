#include <iostream>
#include <string>
#include <math.h>
#include <vector>

using namespace std;

int main() {

  int i, j, numero = 0, cont = 0, aux = -1;
  string msg;
  vector<string> v;

  while (cont < 3) {
    
    getline (cin, msg);
    v.push_back(msg);
    aux++;
    if (msg == "caw caw" && v[aux-1] != "caw caw") {
      cont++;
      cout << numero << endl;
      numero = 0;
    } else if (msg == "caw caw" && v[aux-1] == "caw caw") {
      numero = 0;
      cout << numero << endl;
      cont++;
    } else {
      for(i = 2; i >= 0; i--) {
        if(msg[i] == '*') numero = numero + pow(2, 2-i); 
        else numero += 0;
      }
    }
  }

  return 0;
}

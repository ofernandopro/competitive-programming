#include <iostream>

using namespace std;

int main() {

  int n, numConv, cont = 1;
  do {

    cin >> numConv;
    if (numConv == 0) break;
    int ingressos[numConv];
    int numIngresso;
    for(int i = 0; i < numConv; i++) {
      cin >> ingressos[i];
      if (ingressos[i] == i+1) numIngresso = ingressos[i];
    }

    if (cont != 1) cout << endl << endl;
    cout << "Teste " << cont << endl;
    cout << numIngresso;
    cont++;
    
  } while (n != 0);

  return 0;
}
#include <iostream>
#include <string>
#include <ctype.h>

using namespace std;

int main() {

  int n;
  cin >> n;
  string p, str;
  bool ord;
  char c;

  for (int i = 0; i < n; i++) {
    cin >> p;
    ord = true;
    string aux = p; // Copia string original para uma auxiliar para impressão

    // Se alguma letra da palavra é maiuscula, troca para
    // minuscula pois estamos comparando apenas pela ordem alfabética :
    for(int i = 0; i < p.size(); i++) {
      if (isupper(p[i])) p[i] = tolower(p[i]);
    }

    for(int j = 0; j < p.size()-1; j++) {
      if(p[j] >= p[j+1]) {
        ord = false;
      }
    }

    if(ord) 
      cout << aux << ": " << "O" << endl;
    else 
      cout << aux << ": " << "N" << endl;

  }

  return 0;
}
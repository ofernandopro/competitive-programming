#include <iostream>
#include <string>

using namespace std;

int main() {

  string msg, crib;
  cin >> msg;
  cin >> crib;
  int inicio = 0;
  int qntValidos = 0;

  for (int i = 0; i < msg.size()-crib.size()+1; i++) {

    bool isValid = true;
    
    int aux = 0;
    for (int j = inicio; j < inicio+crib.size(); j++) {
      if (msg[j] == crib[aux]) {
        isValid = false;
      }
      aux++;
    }
    inicio++;

    if (isValid) {
      qntValidos++; 
    }

  }

  cout << qntValidos << endl;

  return 0;
  
}
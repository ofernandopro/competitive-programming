#include <iostream>

using namespace std;

int main(){

  int senha = 0;

  while (1) {

    cin >> senha;

    if (senha != 2002) cout << "Senha Invalida" << endl;
    else {
      cout << "Acesso Permitido" << endl;
      break;
    }

  }

  return 0;
}
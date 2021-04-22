#include <iostream>

using namespace std;

int main() {

  int tempoDeJogo;
  int horaInicial, horaFinal;

  cin >> horaInicial >> horaFinal;

  if (horaFinal > horaInicial) {
    tempoDeJogo = horaFinal - horaInicial;
  } else {
    tempoDeJogo = horaFinal + 24 - horaInicial;
  }

  cout << "O JOGO DUROU " << tempoDeJogo << " HORA(S)" << endl;

  return 0;

}
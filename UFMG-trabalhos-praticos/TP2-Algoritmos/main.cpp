#include <iostream>
#include <utility>
#include <vector>
#include <map>
#include <algorithm>
#include "headers/Grafo.h"

using namespace std;

int main()
{
  int qntPontos, qntTrechos;
  cin >> qntPontos >> qntTrechos;
  Grafo ciclovias(qntPontos, qntTrechos);
  int valTuristicos[qntPontos];
  int ponto1, ponto2, custo;
  int atratividade;
  int i, j; // Contadores

  // Lê valores turísticos de cada ponto de interesse
  for (i = 0; i < qntPontos; i++) {
    cin >> valTuristicos[i];
  }

  // Lê os trechos
  for (j = 0; j < qntTrechos; j++){
    cin >> ponto1 >> ponto2 >> custo;
    atratividade = valTuristicos[ponto1] + valTuristicos[ponto2];
    ciclovias.adicionaTrecho(ponto1, ponto2, custo, atratividade);
  }           

  ciclovias.imprimeCustoTotal();
  ciclovias.imprimePontos();

  return 0;
}
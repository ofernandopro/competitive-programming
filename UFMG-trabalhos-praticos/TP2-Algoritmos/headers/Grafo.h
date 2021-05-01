#ifndef GRAFO_H
#define GRAFO_H

using namespace std;

typedef pair<int, int> pairInt;

// Struct para representar um Grafo
struct Grafo
{
  int qntPontos, qntTrechos;
  vector<pair<pairInt, pairInt> > trechos; // guarda o ponto 1, ponto 2, custo e atratividade de cada trecho
  std::pair<int, int> aux; // pair auxiliar
  std::pair<int, int> aux2; // pair auxiliar
  std::pair<pairInt, pairInt> aux3; // pair aulixiar

  // Construtor
  Grafo(int qntPontos, int qntTrechos)
  {
    this->qntPontos = qntPontos;
    this->qntTrechos = qntTrechos;
  }

  // Função para adicionar uma aresta no grafo
  void adicionaTrecho(int u, int v, int w, int a)
  {
    aux.first = w;
    aux.second = a;
    aux2.first = u;
    aux2.second = v;
    aux3.first = aux;
    aux3.second = aux2;
    trechos.push_back(aux3);
  }

  // Funções para encontrar a MST usando o Algoritmo de Kruskal
  void imprimeCustoTotal();
  void imprimePontos();
};

#endif
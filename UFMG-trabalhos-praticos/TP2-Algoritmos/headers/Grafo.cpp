#include <iostream>
#include <utility>
#include <vector>
#include <map>
#include <algorithm>

#include "Grafo.h"
#include "trechosDisjuntos.h"

using namespace std;

// Função auxiliar para ser usada como parâmetro na função sort do C++ para ordenar as arestas 
// por custo de forma crescente e, caso este seja igual para duas arestas, ordena pelo 
// ponto 2 de forma crescente
bool ordenaVectorPontos(const pair<pairInt, int> &lhs, const pair<pairInt, int> &rhs) { 
  if(lhs.second == rhs.second){
    return lhs.first.second < rhs.first.second; 
  } else {
    return lhs.second < rhs.second;
  }
}

// Função auxiliar para ser usada como parâmetro na função sort do C++ para ordenar 
// por custo de forma crescente e, caso este seja igual para duas arestas, ordena pela 
// atratividade de forma decrescente
bool ordenaPorCustoEAtratividade(const pair<pairInt, pairInt> &lhs, const pair<pairInt, pairInt> &rhs) { 
  if(lhs.first.first == rhs.first.first){
    return lhs.first.second > rhs.first.second; 
  } else {
    return lhs.first.first < rhs.first.first;
  }
}

// Retornam o custo total da MST aplicando o Algoritmo de Kruskal:
void Grafo::imprimeCustoTotal()
{
  int custoTotal = 0;
  int atratividadeTotal = 0;
  vector<int> pontos;

  // Ordena as arestas em relação ao custo e à atratividade
  std::sort(trechos.begin(), trechos.end(), ordenaPorCustoEAtratividade);

  // Cria trechos disjuntos
  trechosDisjuntos disjuntos(qntPontos);

  // Itera nas arestas ordenadas
  vector<pair<pairInt, pairInt> >::iterator it;
  for (it = trechos.begin(); it != trechos.end(); it++)
  {
    int u = it->second.first;
    int v = it->second.second;

    int set_u = disjuntos.encontraPai(u);
    int set_v = disjuntos.encontraPai(v);

    // Checa se a aresta selecionada está criando um ciclo ou não (Ciclo é criado se u
    // e v pertencem ao mesmo set)
    if (set_u != set_v)
    {
      // Se set_u é diferente de set_v, a aresta atual estará na MST
      pontos.push_back(u);
      pontos.push_back(v);
      
      // Atualiza o peso da MST
      custoTotal += it->first.first;
      atratividadeTotal += it->first.second;

      // Funde os dois sets
      disjuntos.merge(set_u, set_v);
    }
  }
  // Imprime o custo total e a atratividade total da MST
  cout << custoTotal << " " << atratividadeTotal << endl;

  //---------------------- Imprime grau dos vértices
  vector<pair<int, int> > vetorRepetidos;

  sort(pontos.begin(), pontos.end());

  pair<int, int> elemRepetidos;
  vector<pair<int, int> > repetidos;

  for(int i = 0; i < pontos.size(); i++){
    elemRepetidos.first = pontos[i];
    elemRepetidos.second = 0;
    for(int j = 0; j < pontos.size(); j++){
      if(pontos[j] == elemRepetidos.first)
        elemRepetidos.second++;
    }
    if(pontos[i] != pontos[i+1])
      repetidos.push_back(elemRepetidos);
  }
  for(int i=0; i < repetidos.size(); i++){
    cout << repetidos[i].second;
    if (i != repetidos.size()-1) cout << " ";
  }
  cout << endl;
}

// Imprime os vértices que formam uma aresta na MST e o custo de
// cada uma dessas arestas aplicando o Algoritmo de Kruskal:
void Grafo::imprimePontos()
{
  // Ordena as arestas em ordem crescente em relação ao custo e à atratividade
  std::sort(trechos.begin(), trechos.end(), ordenaPorCustoEAtratividade);
  
  pair<pair<int, int>, int> pontos;
  vector<pair<pair<int, int>, int> > vectorPontos;

  // Cria conjuntos disjuntos
  trechosDisjuntos disjuntos(qntPontos);

  // Itera nas arestas ordenadas
  vector<pair<pairInt, pairInt> >::iterator it;
  for (it = trechos.begin(); it != trechos.end(); it++)
  {
    int c = it->first.first;
    int u = it->second.first;
    int v = it->second.second;

    int set_u = disjuntos.encontraPai(u);
    int set_v = disjuntos.encontraPai(v);

    // Checa se a aresta selecionada está criando um ciclo ou não (Ciclo é criado se u
    // e v pertencem ao mesmo set)
    if (set_u != set_v)
    {
      pontos.first.first = u;
      pontos.first.second = v;
      pontos.second = c;
      vectorPontos.push_back(pontos);

      // Funde os dois sets
      disjuntos.merge(set_u, set_v);
    }
  }

  sort(vectorPontos.begin(), vectorPontos.end(), ordenaVectorPontos);

  for(int i=0; i < vectorPontos.size(); i++){
    cout << vectorPontos[i].first.first << " ";
    cout << vectorPontos[i].first.second << " ";
    cout << vectorPontos[i].second << endl;
  }
}
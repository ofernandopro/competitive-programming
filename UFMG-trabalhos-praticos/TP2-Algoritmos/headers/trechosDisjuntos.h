#ifndef TRECHOSDISJUNTOS_H
#define TRECHOSDISJUNTOS_H

// Representa sets disjuntos
struct trechosDisjuntos
{
  int *pai;
  int *rank;
  int n;

  // Construtor
  trechosDisjuntos(int n)
  {
    // Aloca memória
    this->n = n;
    pai = new int[n + 1];
    rank = new int[n + 1];

    // Inicialmente, todos os vértices estão em diferentes conjuntos e possuem rank 0
    for (int i = 0; i <= n; i++)
    {
      rank[i] = 0;

      // Todo elemento é pai de si mesmo
      pai[i] = i;
    }
  }

  // Encontra o pai de um vértice u
  int encontraPai(int u)
  {
    // Faz o pai dos vértices no caminho de u--> pai[u] para pai[u]
    if (u != pai[u])
      pai[u] = encontraPai(pai[u]);
    return pai[u];
  }

  // União por rank
  void merge(int x, int y)
  {
    x = encontraPai(x);
    y = encontraPai(y);

    // Faz uma árvore de menor altura uma subárvore da outra árvore
    if (rank[x] > rank[y])
      pai[y] = x;
    else
      pai[x] = y;

    if (rank[x] == rank[y])
      rank[y]++;
  }
};

#endif
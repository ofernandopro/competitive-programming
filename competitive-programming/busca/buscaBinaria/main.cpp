/**
   * O algoritmo de Busca Binária é ótimo e eficiente. 
   * É aplicável como solução em problemas de busca onde os elemento estão ordenados. 
   * Estruturas como Arrays e Listas encadeadas podem utilizar esse algoritmo de busca 
   * de forma eficiente. A complexidade de tempo de execução é O(log n),
   * é melhor comparada à busca sequencial O(n). Através do paradigma Dividir para 
   * Conquistar, esse algoritmo pode ser implementado de forma recursiva ou iterativa. 
   * 
  */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * 
 * BUSCA BINÁRIA RECURSIVA (Complexidade O(logn), sendo n o tamanho do vetor)
 * 
 * Busca recursivamente o item dentro do vetor. A cada iteração
 * reduz o espaço de busca pela metade. Quando encontra o item retorna
 * o índice onde ele foi encontrado. Caso contrário retorna -1.
 * 
 * Retirado de: https://blog.pantuza.com/artigos/busca-binaria
 * 
 */
int buscaBinariaRecursiva(vector<int> vetor, int inicio, int final, int valor)
{
    /* Índice i que representa o meio do sub-vetor inicio->final */
    int i = (inicio + final) / 2;

    if (inicio > final) {  /* Ponto de parada. valor não está no vetor */
        return -1;
    }

    if (vetor[i] == valor) {  /* Valor encontrado */
        return i;
    }

    if (vetor[i] < valor)  /* Valor está no sub-vetor à direita */
        return buscaBinariaRecursiva(vetor, i + 1, final, valor);
    else  /* vetor[i] > valor. Valor está no sub-vetor à esquerda */
        return buscaBinariaRecursiva(vetor, inicio, i - 1, valor);
    
}


/**
 * BUSCA BINÁRIA ITERATIVA (Complexidade O(logn), sendo n o tamanho do vetor)
 * 
 * Busca iterativamente o item dentro do vetor vector. A cada iteração
 * reduz o espaço de busca pela metade sem fazer chamadas recursivas.
 * Ao encontrar o item retorna seu índice. Caso contrário retorna -1
 * 
 */

int buscaBinariaIterativa(vector<int> vetor, int inicio, int final, int x)
{
    while (inicio <= final) {
        int m = inicio + (final - inicio) / 2;
  
        // Checa se x está presente no meio
        if (vetor[m] == x)
            return m;
  
        // Se x é maior, ignore a parte da esquerda do vetor
        if (vetor[m] < x)
            inicio = m + 1;
  
        // Se x é menor, ignore a parte direita do vetor
        else
            final = m - 1;
    }
  
    // Se chegou até aqui, então o elemento não está presente
    return -1;
}


int main () {

  // --------- USANDO BUSCA BINÁRIA RECURSIVA:

  int valor;
  vector<int> vetor;
  vetor.push_back(5);
  vetor.push_back(12);
  vetor.push_back(1);
  vetor.push_back(90);
  vetor.push_back(40); // Vetor tem que estar ordenado!!!

  // Ordenando vetor:
  sort(vetor.begin(), vetor.end());

  int inicio = 0;
  int final = vetor.size();

  cin >> valor;
  cout << "Posição: " << buscaBinariaRecursiva(vetor, inicio, final, valor) << endl;


  // --------- USANDO BUSCA BINÁRIA ITERATIVA:
  
  vector<int> vetor2;
  vetor2.push_back(15);
  vetor2.push_back(2);
  vetor2.push_back(100);
  vetor2.push_back(90);
  vetor2.push_back(1); // Vetor tem que estar ordenado!!!

  // Ordenando vetor2:
  sort(vetor2.begin(), vetor2.end());

  int tam = vetor2.size();

  int valor2;
  cin >> valor2;

  cout << "Posição: " << buscaBinariaIterativa(vetor2, 0, tam-1, valor2) << endl;


  // Implementação com arrays: https://www.geeksforgeeks.org/binary-search/

  return 0;

}
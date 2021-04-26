#include <iostream>
#include <vector>

using namespace std;

/**
 * Busca Sequencial: Complexidade O(n)
 * 
 * Busca sequencialmente o item dentro do vetor.
 * Caso encontrado retorna o índice do item. Caso contrário
 * retorna -1.
 * 
 * Retirado de: https://blog.pantuza.com/artigos/busca-binaria
 * 
 */
int buscaSequencial (int vetor[], int tamanhoArr, int item)
{
    for (int i = 0; i < tamanhoArr; i++) {

        if (vetor[i] == item) {
            return i;
        }
    }

    return -1;
}

int buscaSequencialVector (vector<int> vetor2, int tamanhoArr, int item)
{
    for (int i = 0; i < tamanhoArr; i++) {

        if (vetor2[i] == item) {
            return i;
        }
    }

    return -1;
}

int main () {

  int valor, i, n;
  int vetor[] = {1, 3, 4, 5, 2, 8, 7, 6};

  int tamanhoArr = sizeof(vetor)/sizeof(vetor[0]); // Pega o tamanho do vetor

  cin >> valor;

  cout << "Posição: " << buscaSequencial(vetor, tamanhoArr, valor) << endl;



  // COM VECTOR:

  vector<int> vetor2;
  int tam;
  cin >> tam;

  for (i = 0; i < tam; i++) {
    cin >> n;
    vetor2.push_back(n);
  }

  cin >> valor;
  cout << "Posição: " << buscaSequencialVector(vetor2, tam, valor) << endl;

  return 0;
}
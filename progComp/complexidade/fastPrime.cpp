#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>

/**
 *
 * Abordagem ingênua: verificar para todo Y entre 1 e X se Y divide X.
 * Para cada número, fazemos no pior caso X operações, e fazemos isso N vezes. Então temos
 * um algoritmo O(N*X).
 * No pior caso, teríamos os maiores N e X possíveis, que seria N = 200 e X = 2.10ˆ9
 * Nesse caso, teríamos que fazer 200 * 2*10ˆ9 = 4*10ˆ11 operações. Isso é 400 vezes mais lento
 * que 10ˆ9 que é o máximo recomendado, então o algoritmo vai exceder o limite de tempo e
 * não vai passar.
 * 
 * Como melhorar?
 * 
 * 1) Sair do loop quando achar um divisor. Mas se o número for primo isso não ajuda.
 * 2) Olhar se é divisível por 2 e depois olhar apenas os números ímpares. Mas isso não 
 * ajuda muito pois o número de operações cai pela metade mas ainda continua igual a 2*10ˆ11,
 * que ainda é 200 vezes mais lento que 10ˆ9.
 * 
 * Pequenas otimizações não ajudam muito.
 * 
 * Otimização Definitiva: olhar até a raiz, pois se não tiver nenhum divisor até a raiz, 
 * antes também não haverá. Qual a complexidade?
 * 
 * Para cada elemento X fazemos até sqrt(X) operações, e repetimos N vezes. Logo, fica 
 * O(sqrt(X) * N). Assumindo os maiores valores, fica:
 * sqrt(2 * 10ˆ9) * 200 = 5*10ˆ4 * 200 = 10ˆ7 operações
*/

using namespace std;

int main() {

  int n, i;
  long long j; // long long pois vamos trabalhar com números inteiros muito grandes
  cin >> n;

  for (i = 0; i < n; i++) {

    long long x; cin >> x;

    bool primo = true;

    for(j = 2; j*j <= x; j++) { // j*j pois trabalhar com inteiros é melhor
      if (x % j == 0) primo = false;
    }

    if(primo) cout << "Prime" << endl; 
    else cout << "Not Prime" << endl; 

  }

  return 0;
}
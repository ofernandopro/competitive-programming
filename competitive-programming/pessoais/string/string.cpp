#include <iostream>
#include <string>
#include <algorithm> // sort, funções de max e min
#include <functional> // greater
#include <vector>
#include <utility> // pair
#include <iterator>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <math.h>
#define f first
#define s second
// Função útil de debugging, basta escrever "dbg(a)" no código que printará "a = val a"
#define dbg(x) cout << #x << " = " << x << endl;

typedef long long ll; // Long long é um inteiro de 64 bits
const int INF = 0x3f3f3f3f; // Não são infinito mas é um número muito grande (se somar 2 deles vai dar overflow)
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

// Defininfo a macro "_", muito importante para grandes entradas
// Antes de submeter o código e para debugá-lo, comente esta parte
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'


using namespace std;

int main() { _

  int j = 0, contaLetras = 0, k = 0, aux2, cont = 0;
  string s1 = "ABCD";
  string s2 = "CDAC";

  while(j < s2.size()) { // Percorre todo o bracelete

    // Se a letra nas duas strings são iguais 
    if(s1[k] == s2[j]) {
      contaLetras++;
      k++;
    } else {
      contaLetras = 0;
      k = 0;
    }
    j++;

    if(contaLetras == s1.size()) {
      cout << "S" << endl;
      break;
    }

    if(s2.size() > s1.size()) {
      aux2 = 1;
    } else {
      aux2 = ceil(s1.size()/s2.size());
    }

    if (j == s2.size() && cont < aux2) { // Se true, está na última letra de s2 pela primeira vez
      j = 0; // Fazemos o contador voltar ao início
      cont++; // Contador para dizer que já estamos olhando a string mais de uma vez
    } else if (j == s2.size() && cont == aux2) { // Se true, está na última letra de s2 pela segunda vez
      cout << "N" << endl;
      break;
    }

  }

  return 0;
}
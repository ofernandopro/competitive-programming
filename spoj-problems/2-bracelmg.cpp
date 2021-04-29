#include <iostream>
#include <string>
#include <math.h> 

using namespace std;

#define dbg(x) cout << #x << " = " << x << endl;

int main() {

  int n;
  cin >> n;
  string s1, s2;

  for(int i = 0; i < n; i++) {
    cin >> s1 >> s2;

    int cont = 0, contaLetras = 0, j = 0, k = 0, aux2;
    bool nao = false;

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
          nao = true;
          break;
        }

      }

      if (nao == true) {

        cont = 0, contaLetras = 0, j = s2.size()-1, k = 0;

        while(j >= 0) { // Percorre todo o bracelete

          // Se a letra nas duas strings são iguais 
          if(s1[k] == s2[j]) {
            contaLetras++;
            k++;
          } else {
            contaLetras = 0;
            k = 0;
          }
          j--;

          if(contaLetras == s1.size()) {
            cout << "S" << endl;
            break;
          }

          if (j == -1 && cont < aux2) { // Se true, está na última letra de s2 pela primeira vez
            j = s2.size()-1; // Fazemos o contador voltar ao início
            cont++; // Contador para dizer que já estamos olhando a string mais de uma vez
          } else if (j == -1 && cont == aux2) { // Se true, está na última letra de s2 pela segunda vez
            cout << "N" << endl;
            break;
          }

        }

      }

  } 

  return 0;
}
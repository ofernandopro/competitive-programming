#include <iostream>
#include <string.h>

using namespace std;

char texto[1000010];
int tec, tamMaiorSubstring = 0;

int getMaiorSubstring() {
  int contSubstring[128], inicio = 0, fim = tec - 1;
  int tamTexto = strlen(texto);
  int tecUsadas = 0, aux = 0;

  for (int i = 0; i < 128; ++i) {
    contSubstring[i] = 0;
  }

  for (int i = 0; i < tec; ++i) {
    if(contSubstring[texto[i]] == 0) {
      tecUsadas++;
    }
    contSubstring[texto[i]]++;
  }

  while(fim < tamTexto - 2) {
    while((fim < tamTexto - 2) && (tecUsadas <= tec)) {
      fim++;
      if(contSubstring[texto[fim]] == 0) {
        tecUsadas++;
      }
      contSubstring[texto[fim]]++;
    }

    if(tecUsadas > tec) {
      inicio++;
    }

    if(tamMaiorSubstring <= (fim - inicio + 1)) {
      tamMaiorSubstring = fim - inicio + 1;
    }

    if(contSubstring[texto[inicio-1]] > 0) {
      contSubstring[texto[inicio-1]]--;
      aux = contSubstring[texto[inicio-1]];
      if(aux == 0) {
        tecUsadas--;
      }
    }
  }

  return 0;
}

int main() {

  while(1) {

    tamMaiorSubstring = 0;

    cin >> tec;
    getchar();

    if(tec != 0) {
      if(fgets(texto, 1000010, stdin) != NULL) {
        getMaiorSubstring();
      }
      cout << tamMaiorSubstring << endl;
    } else {
      break;
    }

  }

  return 0;

}
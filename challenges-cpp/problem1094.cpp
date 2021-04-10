#include <iostream>
#include <iomanip>

using namespace std;

int main(){

  int n, i, qnt;
  char animal;
  int qntCoelhos = 0, qntRatos = 0, qntSapos = 0;
  cin >> n;

  for (i = 0; i < n; i++) {
    cin >> qnt >> animal;
    if (animal == 'C') {
      qntCoelhos += qnt;
    } else if(animal == 'R') {
      qntRatos += qnt;
    } else if (animal == 'S') {
      qntSapos += qnt;
    }
  }

  int totalAnimais = qntCoelhos + qntRatos + qntSapos;
  float percentagemCoelhos = (float)qntCoelhos / (float)totalAnimais;
  float percentagemRatos = (float)qntRatos / (float)totalAnimais;
  float percentagemSapos = (float)qntSapos / (float)totalAnimais;

  cout << "Total: " << totalAnimais << " cobaias" << endl;
  cout << "Total de coelhos: " << qntCoelhos << endl;
  cout << "Total de ratos: " << qntRatos << endl;
  cout << "Total de sapos: " << qntSapos << endl;
  cout << "Percentual de coelhos: " << fixed << setprecision(2) << percentagemCoelhos * 100 << " %" << endl;
  cout << "Percentual de ratos: " << fixed << setprecision(2) << percentagemRatos * 100 << " %" << endl;
  cout << "Percentual de sapos: " << fixed << setprecision(2) << percentagemSapos * 100 << " %" << endl;

  return 0;
}
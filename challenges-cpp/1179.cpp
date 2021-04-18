#include <iostream>
#include <vector>

using namespace std;

int main(){

  int i, n[15], j;
  vector<int> pares;
  vector<int> impares;

  for (i = 0; i < 15; i++) {
    cin >> n[i];

    if ((n[i] % 2 != 0) && (impares.size() <= 5)) {
      impares.push_back(n[i]);
    } 
    if (impares.size() == 5) {
      for (j = 0; j < 5; j++){
        cout << "impar[" << j << "] = " << impares[j] << endl;
      }
      impares.clear();
    }

    if ((n[i] % 2 == 0) && (pares.size() <= 5)) {
      pares.push_back(n[i]);
    }
    if (pares.size() == 5) {
      for (j = 0; j < 5; j++){
        cout << "par[" << j << "] = " << pares[j] << endl;
      }
      pares.clear();
    }

  }

  if(impares.size() > 0) {
    for (j = 0; j < impares.size(); j++){
      cout << "impar[" << j << "] = " << impares[j] << endl;
    }
  }

  if(pares.size() > 0) {
    for (j = 0; j < pares.size(); j++){
      cout << "par[" << j << "] = " << pares[j] << endl;
    }
  }
 
  return 0;

}
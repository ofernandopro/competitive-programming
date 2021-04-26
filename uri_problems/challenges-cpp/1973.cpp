#include <iostream>
#include <iterator>
#include <map>

typedef long long int ll;

using namespace std;

int main() {

  ll numEst, numCarneiros, qntSitios = 0, naoRoubados = 0, i = 1, qntZero = 0;
  cin >> numEst;
  map<int, int> sitio;
  map<int, int> sitioAux;

  for (int i = 0; i < numEst; i++) { // O(n)
    cin >> numCarneiros;
    sitio.insert(pair<int, int>(i+1, numCarneiros));
    sitioAux.insert(pair<int, int>(i+1, numCarneiros));
  }

  for (int i = 1; i <= numEst; i++) { // O(n)
    naoRoubados += sitio[i];
  }

  int primeiro = sitio[0];

  while (i > 0 && i <= numEst) { // O(n)

    int second = sitio[i];

    if(sitio[i] == sitioAux[i]) qntSitios++;

    if(sitio[i] > 0) {
      sitio[i]--;
      naoRoubados--; // Roubou
    }

    if(sitio[i] == 0) qntZero++;
    
    if(second % 2 != 0) i++;
    else { // Se par:
      naoRoubados = naoRoubados - i+1 + qntZero;
      break;
    }

  }

  cout << qntSitios << " " << naoRoubados << endl;

  return 0;
}


/*
#include <iostream>
#include <iterator>
#include <map>

typedef long long int ll;

using namespace std;

int main() {

  ll numEst, numCarneiros, qntSitios = 0, naoRoubados = 0, i = 1;
  cin >> numEst;
  map<int, int> sitio;
  map<int, int> sitioAux;

  for (int i = 0; i < numEst; i++) { // O(n)
    cin >> numCarneiros;
    sitio.insert(pair<int, int>(i+1, numCarneiros));
    sitioAux.insert(pair<int, int>(i+1, numCarneiros));
  }

  for (int i = 1; i <= numEst; i++) { // O(n)
    naoRoubados += sitio[i];
  }

  int primeiro = sitio[0];

  while (i >= 0 && i <= numEst) { // O(n)

    int second = sitio[i];

    if(sitio[i] == sitioAux[i]) qntSitios++;

    if(sitio[i] > 0) {
      sitio[i]--;
      naoRoubados--;
    }
    
    if(second % 2 != 0) i++;
    else {
      for(int j = 0; j < i; j++)
        if (sitio[j] > 0) naoRoubados = naoRoubados - 1;
      break;
    }

  }

  cout << qntSitios << " " << naoRoubados << endl;

  return 0;
}
*/
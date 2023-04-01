#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <utility>
#include <iterator>
#include <set>
#include <math.h>

using namespace std;

int getMelhorQntBrinquedos(vector<pair<int, int> >& listaPacotes, set<int>& melhoresPacotes, int limite) {

  int n = listaPacotes.size();
  int melhores[n][limite];
  set<int> sRes[n][limite];
  set<int> sAux;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < limite; j++) {
      melhores[i][j] = 0;
      sRes[i][j] = sAux;
    }
  }

  for (int i = 0; i < n; i++) {
    for (int peso = 0; peso < limite; peso++) {
      if (i == 0) {
        melhores[i][peso] = 0;
      } else {
        int pesoPac = (listaPacotes.begin()+i)->second;

        if (peso >= pesoPac) {
          if (melhores[i - 1][peso - pesoPac] + (listaPacotes.begin() + i)->first > melhores[i - 1][peso]) {
            melhores[i][peso] = melhores[i - 1][peso - pesoPac] + (listaPacotes.begin() + i)->first;
            sRes[i][peso] = sRes[i - 1][peso - pesoPac];
            sRes[i][peso].insert(i);
          } else {
            melhores[i][peso] = melhores[i - 1][peso];
            sRes[i][peso] = sRes[i - 1][peso];
          }
        } else {
          melhores[i][peso] = melhores[i - 1][peso];
          sRes[i][peso] = sRes[i - 1][peso];
        }
      }
    }
  }

  melhoresPacotes.swap(sRes[n - 1][limite - 1]);
  return melhores[n - 1][limite - 1];

}

int main() {

  vector<pair<int, int> > listaPacotes;
  int Pac, qt, peso, N;

  cin >> N;
  
  while (N--) {
    cin >> Pac;
    listaPacotes.push_back(make_pair(0,0));

    for (int i = 0; i < Pac; i++) {
      cin >> qt >> peso;
      listaPacotes.push_back(make_pair(qt, peso));
    }

    int pesoMax = 51;
    set<int> melhoresPacotes;
    int melhorQntBrinquedos = getMelhorQntBrinquedos(listaPacotes, melhoresPacotes, pesoMax);

    cout << melhorQntBrinquedos << " brinquedos" << endl;

    int totalpeso = 0;

    for (set<int>::const_iterator cIt = melhoresPacotes.begin(); cIt != melhoresPacotes.end(); cIt++) {
      totalpeso += (listaPacotes.begin() + *cIt)->second;
    }

    cout << "Peso: " << totalpeso << " kg" << endl << "sobra(m) " << Pac - melhoresPacotes.size() << " pacote(s)" << endl << endl;
    listaPacotes.clear();
   }

   return 0;
}

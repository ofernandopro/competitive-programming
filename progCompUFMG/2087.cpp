#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
#include <functional>
#include <vector>
#include <utility>
#include <iterator>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <math.h>

using namespace std;

vector<string> vecAux;
string s;

int getRes(string s, int p){
    bool bAux;
    for(int i = 0; i < vecAux.size(); i++){
      bAux = false;
      string sAux = vecAux[i];
      if((s == sAux || s == sAux.substr(0, s.size()) || sAux == s.substr(0, sAux.size())) && i != p){
        bAux = true;
        break;
      }
    }
    if(!bAux) {
      return 0;
    } else {
      return 1;
    }
    
}

int main() {
    int N;
    int i, j, k;
    bool res;

    while(cin >> N && N){

      for(i = 0; i < N; i++){
        cin >> s;
        vecAux.push_back(s);
      }

      for(j = 0; j < N; j++){
        res = false;
        k = getRes(vecAux[j], j);

        if(k == 1){
          res = true;
          break;
        }
      }
      if(!res) {
        cout << "Conjunto Bom" << endl;
      } else  {
        cout << "Conjunto Ruim" << endl;
      }

      vecAux.clear();
    }
    return 0;
}
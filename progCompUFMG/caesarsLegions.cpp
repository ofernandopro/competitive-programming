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

#define dbg(x) cout << #x << " = " << x << endl;

typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

#define f(inicio, fim) for(int i = inicio; i < fim; i++)
#define ff(inicio, fim) for(int j = inicio; j < fim; j++)
#define fff(inicio, fim) for(int k = inicio; k < fim; k++)
#define print(vetor) for(auto elem : vetor) cout << elem << " "

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

using namespace std;

int sfm, shm, aux[101][101][11][11];

int getNumber(int fm, int hm, int val1, int val2){
    if(aux[fm][hm][val1][val2] != -1)
      return aux[fm][hm][val1][val2];

    if(fm + hm == 0)
      return 1;

    int ch1 = 0;
    int ch2 = 0;

    if(val1 < sfm && fm > 0)
        ch1 = getNumber(fm-1, hm, val1+1,0) % 100000000;

    if(val2 < shm && hm > 0)
        ch2 = getNumber(fm,hm-1,0,val2+1) % 100000000;

    return aux[fm][hm][val1][val2] = (ch1 + ch2) % 100000000;

}

int main(){ _
  int fm, hm;

  memset(aux, -1, sizeof aux);

  cin >> fm;
  cin >> hm;
  cin >> sfm;
  cin >> shm;

  cout << getNumber(fm, hm, 0, 0) << endl;

  return 0;
}
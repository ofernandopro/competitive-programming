#include <iostream>
#include <string>
#include <algorithm> // sort, erase, funções de max e min
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

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

using namespace std;

void duplicateZeros(vector<int>& arr) {

  vector<int> arrAux;
  int cont = 0;

  for (int i = 0; i < arr.size(); i++) {
    arrAux.push_back(arr[i]);

    if (arr[i] == 0){
      arrAux.push_back(arr[i]);
      cont++;
    }
  }

  for (int i = 0; i < cont; i++) {
    arrAux.pop_back();
  }

  arr = arrAux;

}

int main() { _

  vector<int> v1;
  v1.push_back(1);
  v1.push_back(2);
  v1.push_back(3);

  duplicateZeros(v1);

  return 0;
}
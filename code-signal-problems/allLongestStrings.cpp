
// ACCEPTED

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

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

using namespace std;

int main() { _

  vector<string> inputArray;
  inputArray.push_back("aba");
  inputArray.push_back("aa");
  inputArray.push_back("ad");
  inputArray.push_back("vcd");
  inputArray.push_back("aba");

  int max = -1;

  for (int i = 0; i < inputArray.size(); i++) {
    int size = inputArray[i].size();
    if (size > max) {
       cout << "Aqui" << endl;
       int size = inputArray[i].size();
      max = size;
    }
  }

  cout << max << endl;

  vector<string> inputArrayAux;

  for (int i = 0; i < inputArray.size(); i++) {
    if (inputArray[i].size() == max) {
      inputArrayAux.push_back(inputArray[i]);
    }
  }

for (int i = 0; i < inputArrayAux.size(); i++) {
    cout << inputArrayAux[i] << endl;;
  }

  return 0;
}
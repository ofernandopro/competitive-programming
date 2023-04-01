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

bool checkIfExist(vector<int>& arr) {

  for (int i = 0; i < arr.size(); i++) {
    for (int j = 0; j < arr.size(); j++) {
      if (i != j) {
        if (arr[j] == 2*arr[i] || arr[i] == 2*arr[j]) {
          return true;
        }
      }
    }
  }

  return false;
        
}

int main() { _

  vector<int> nums;
  nums.push_back(3);
  nums.push_back(1);
  nums.push_back(7);
  nums.push_back(11);

  if (checkIfExist(nums)) {
    cout << "v" << endl;
  } else {
    cout << "f" << endl;
  }

  return 0;
}
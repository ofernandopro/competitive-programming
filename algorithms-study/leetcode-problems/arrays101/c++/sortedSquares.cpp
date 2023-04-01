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

int main() { _

  // Entrada:
  vector<int> nums;
  nums.push_back(-4);
  nums.push_back(-1);
  nums.push_back(0);
  nums.push_back(3);
  nums.push_back(10);

  vector<int> squaredNums;

  for (int i = 0; i < nums.size(); i++) {
    squaredNums.push_back(nums[i]*nums[i]);
  }

  sort(squaredNums.begin(), squaredNums.end());

  for (int i = 0; i < squaredNums.size(); i++) {
    cout << squaredNums[i] << endl;
  }

  return 0;

}
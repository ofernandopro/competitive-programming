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

int findNumbers(vector<int>& nums) {
  int qntNumbersWithEvenDigits = 0;

  for (int i = 0; i < nums.size(); i++) {
    string s = to_string(nums[i]);
    if (s.length() % 2 == 0) {
      qntNumbersWithEvenDigits++;
    }
  }

  return qntNumbersWithEvenDigits;
}

int main() { _

  // Entrada:
  vector<int> nums;
  nums.push_back(555);
  nums.push_back(901);
  nums.push_back(482);
  nums.push_back(1771);

  cout << findNumbers(nums) << endl;

  return 0;
}
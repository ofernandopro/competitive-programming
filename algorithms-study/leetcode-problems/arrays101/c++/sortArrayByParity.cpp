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

vector<int> sortArrayByParity(vector<int>& nums) {

  vector<int> v;

  for (int i = 0; i < nums.size(); i++) {
    if (nums[i] % 2 == 0) {
      v.push_back(nums[i]);
    }
  }

  for (int i = 0; i < nums.size(); i++) {
    if (nums[i] % 2 != 0) {
      v.push_back(nums[i]);
    }
  }

  return v;
  

}

int main() { _

  vector<int> nums;
  nums.push_back(3);
  nums.push_back(1);
  nums.push_back(2);
  nums.push_back(4);

  sortArrayByParity(nums);

  return 0;
}
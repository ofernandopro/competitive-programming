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

void moveZeroes(vector<int>& nums) {

  int cont0 = 0;

  for (int i = 0; i < nums.size(); i++) {

    if (nums[i] == 0) {
      nums.erase(nums.begin() + i);
      i--;
      cont0++;
    }

  }

   for (int i = 0; i < cont0; i++) {
     nums.push_back(0);
  }

  for (int i = 0; i < nums.size(); i++) {
     cout << nums[i] << endl;
  }

}

int main() { _

  vector<int> nums;
  nums.push_back(0);
  nums.push_back(0);
  nums.push_back(1);

  moveZeroes(nums);

  return 0;
}
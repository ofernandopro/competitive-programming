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


int findMaxConsecutiveOnes(vector<int>& nums) {
  int max = 0;
  int cont1 = 0;

  for (int i = 0; i < nums.size(); i++) {
    if (nums[i] == 1) {
      cont1++;
    } else {
      if (cont1 > max) {
        max = cont1;
      }
      cont1 = 0;
    }

    if (i == nums.size()-1) {
      if (cont1 > max) {
        max = cont1;
      }
    }
  }
  return max;
}

int main() { _

  // Entrada:
  vector<int> nums;
  for (int i = 0; i < 323; i++) {
    if (i == 100 || i == 200 || i == 300) {
      nums.push_back(0);
    } else {
      nums.push_back(1);
    }
  }

  cout << findMaxConsecutiveOnes(nums) << endl;

  return 0;
}
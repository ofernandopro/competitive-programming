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

int removeDuplicates(vector<int>& nums) {
/*
    // Com For:
    for (int i = 0; i < nums.size()-1; i++) {
      if (nums[i] == nums[i+1]) {
        nums.erase(nums.begin() + i+1);
        i = i - 1;
      }
    }

    return nums.size();
   */

  // Com Sets:
  set<int> s1;
  vector<int> vAux;

  for (int i = 0; i < nums.size(); i++) {
    s1.insert(nums[i]);
  }
  
  for (int i = 0; i < s1.size(); i++) {
    int x = *next(s1.begin(), i);
    vAux.push_back(x);
  }

  nums = vAux;
  return nums.size();

}

int main() { _

  vector<int> nums;
  nums.push_back(0);
  nums.push_back(0);
  nums.push_back(1);
  nums.push_back(1);
  nums.push_back(1);
  nums.push_back(2);
  nums.push_back(2);
  nums.push_back(3);
  nums.push_back(3);
  nums.push_back(4);

  removeDuplicates(nums);

  return 0;
}
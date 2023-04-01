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
#include <iterator>
#define f first
#define s second

#define dbg(x) cout << #x << " = " << x << endl;

typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

  //nums1.insert(nums1.end(), make_move_iterator(nums2.begin()), make_move_iterator(nums2.end()));
  //move(nums2.begin(), nums2.end(), back_inserter(nums1));

  //sort(nums1.begin(), nums1.end());
/*
  for (int i = 0; i < nums1.size(); i++) {
    
  }

  for (int i = 0; i < nums1.size(); i++) {
    
  }*/

  for (int i = 0; i < n; i++) {
    nums1.pop_back();
  }

  move(nums2.begin(), nums2.end(), back_inserter(nums1));

  sort(nums1.begin(), nums1.end());

  for (int i = 0; i < nums1.size(); i++) {
    cout << nums1[i] << ", ";
  }

}

int main() { _

  vector<int> v1;
  vector<int> v2;

  v1.push_back(0);

  v2.push_back(1);

  merge(v1, 0, v2, 1);
  

  return 0;
}
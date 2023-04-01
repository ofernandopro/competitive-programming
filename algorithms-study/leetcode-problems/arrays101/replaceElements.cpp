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
/*
int binarySearch(vector<int> arr, int l, int r, int x)
{
  int pos;
	if (r >= l) {
		int mid = l + (r - l) / 2;
    pos = mid;

		if (arr[mid] == x)
			return mid;

		if (arr[mid] > x)
			return binarySearch(arr, l, mid - 1, x);

		return binarySearch(arr, mid + 1, r, x);
	}
  dbg(pos);
	return pos;
}
*/
vector<int> replaceElements(vector<int>& arr) {
/*
  // Solução Ingênua: (deu TLE)

  if (arr.size() == 1) {
    vector<int> vAux;
    vAux.push_back(-1);
    return vAux;
  }

  for (int i = 0; i < arr.size(); i++) {
    cout << arr[i] << ", ";
  }
  cout << endl;

  vector<int> v;

  for (int i = 0; i < arr.size()-1; i++) {
    int max = -INF;
    for (int j = i+1; j < arr.size(); j++) {
      if (arr[j] > max) {
        max = arr[j];
      }
    }
    cout << max << endl;
    v.push_back(max);
  }
  v.push_back(-1);

  arr = v;

  for (int i = 0; i < v.size(); i++) {
    cout << v[i] << ", ";
  }

  return arr;
*/
/*
  if (arr.size() == 1) {
    vector<int> vAux;
    vAux.push_back(-1);
    return vAux;
  }

  if (arr.size() == 2) {
    vector<int> vAux;
    vAux.push_back(vAux[vAux.size()-1]);
    vAux.push_back(-1);
    return vAux;
  }

  vector<int> vAux = arr; // not sorted
  vector<int> vResult;

  sort(arr.begin(), arr.end(), greater<int>());

  int pos1 = 0;

  for (int i = 0; i < vAux.size(); i++) {
    //int pos1 = binarySearch(arr, 0, arr.size() - 1, arr[i]);
    int pos2 = binarySearch(vAux, 0, vAux.size() - 1, arr[i]);
    
    dbg(pos2);

    if (pos2 > pos1) {
      vResult.push_back(arr[i]);
      if (pos1+1 < pos2) {
        i--;
      }
      pos1++;
    }
  }

  vResult.push_back(vAux[vAux.size()-1]);
  vResult.push_back(-1);

  for (int i = 0; i < vResult.size(); i++) {
    cout << vResult[i] << ", ";
  }

  return vResult;
*/

  // ACCEPTED:

  if (arr.size() == 1) {
    vector<int> vAux;
    vAux.push_back(-1);
    return vAux;
  }
        
  vector<int> v;
  int INF = 0x3f3f3f3f;

  for (int i = 0; i < arr.size()-1; i++) {
    int max = -INF;
    for (int j = arr.size()-1; j >= i+1; j--) {
      if (arr[j] > max) {
        max = arr[j];
      }
    }
    v.push_back(max);
  }
  v.push_back(-1);

  return v;
}

int main() { _

  vector<int> nums;
  nums.push_back(17);
  nums.push_back(18);
  nums.push_back(5);
  nums.push_back(4);
  nums.push_back(6);
  nums.push_back(1);

  replaceElements(nums);

  return 0;
}
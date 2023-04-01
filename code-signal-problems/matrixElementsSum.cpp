
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

  vector<vector<int> > matrix;
  vector<int> v1;
  v1.push_back(0);
  v1.push_back(1);
  v1.push_back(1);
  v1.push_back(2);
  vector<int> v2;
  v2.push_back(0);
  v2.push_back(5);
  v2.push_back(0);
  v2.push_back(0);
  vector<int> v3;
  v3.push_back(2);
  v3.push_back(0);
  v3.push_back(3);
  v3.push_back(3);

  matrix.push_back(v1);
  matrix.push_back(v2);
  matrix.push_back(v3);

  vector< vector<int> >::iterator row;
  vector<int>::iterator col;
  int sum = 0;

  int i = 0;
  for (row = matrix.begin(); row != matrix.end(); row++) {
      int j = 0;
      for (col = row->begin(); col != row->end(); col++) {
          if (i == 0) {
            if (matrix[i][j] != 0) {
              sum += matrix[i][j];
            }
          } else {
            if (matrix[i][j] != 0) {
              if (matrix[i-1][j] == 0) {
                matrix[i][j] = 0;
              } else {
                sum += matrix[i][j];
              }
            }
          }
          j++;
      }
      i++;
  }

  cout << sum << endl;

  return 0;
}
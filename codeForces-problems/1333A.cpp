#include <iostream>
#include <string>
#include <vector>

using namespace std;

void solve() {
  int n, m;
  cin >> n >> m;
  string blackLine(m, 'B');
  
  vector<string> v(n, blackLine);
  v[0][0] = 'W';

  for(int i = 0; i < n; i++) {
    cout << v[i] << endl;
  }

}

int main() {

  int t; cin >> t;

  while(t--) solve();

  return 0;
}

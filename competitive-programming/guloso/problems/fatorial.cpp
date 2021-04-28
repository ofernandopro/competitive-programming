#include <iostream>
#include <vector>

using namespace std;

int main() {

  int n; cin >> n;
  vector<int> fat(11);
  fat[0] = 1;
  for (int i = 0; i <= 10; i++) fat[i] = fat[i-1]*i;

  int ans = 0;
  for (int i = 10; i > 0; i--) {
    int at = n/fat[i]; // quantas vezes fat[i] cabe no n
    ans += at;
    n -= at * fat[i];
  }

  cout << ans << endl;

  return 0;
}
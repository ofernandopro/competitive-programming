#include <iostream>
#include <vector>

using namespace std;

int main() {

  int n, hi;
  cin >> n;
  vector<int> h;
  int relevo[n];
  bool e_igual = true;

  for (int i = 0; i < n; i++) {
    cin >> hi;
    h.push_back(hi);
  }

  for(int i = 1; i < n; i++) {
    if (h[i] < h[i-1]) {
      relevo[i] = 1;
    } else if (h[i] > h[i-1]) {
      relevo[i] = 0;
    } else {
      e_igual = false;
    }
  }

  for(int i = 1; i < n; i++) {
    if (relevo[i] == relevo[i-1]) {
      e_igual = false;
    }
  }

  if (e_igual) {
    cout << 1 << endl;
  } else {
    cout << 0 << endl;
  }

  return 0;
}
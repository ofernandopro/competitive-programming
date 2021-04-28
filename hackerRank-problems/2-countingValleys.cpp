#include <iostream>
#include <iomanip>

using namespace std;

int main() {

  int i; // counters
  int n, qntV = 0;
  cin >> n;

  int height[n];
  char path[n];
  height[0] = 0;

  for (i = 0; i < n; i++) {
    cin >> path[i];
  }

  for (i = 0; i < n; i++) {
    if (path[i] == 'U') {
      height[i+1] = height[i] + 1;
    } else {
      height[i+1] = height[i] - 1;
    }
    if (height[i] < 0 && height[i-1] >= 0) {
      qntV++;
    }
  }

  cout << qntV << endl;

  return 0;

}
#include <iostream>
#include <algorithm> // sort, funções de max e min

using namespace std;

int main() {

  int t, a, b, x, y, max1, max2, maxArea;
  cin >> t;

  for (int i = 0; i < t; i++) { // O(n)
    cin >> a >> b >> x >> y;

    max1 = max(y*a, (b-y-1)*a);
    max2 = max(x*b, (a-x-1)*b);
    maxArea = max(max1, max2);
    cout << maxArea << endl;
  }

  return 0;
}
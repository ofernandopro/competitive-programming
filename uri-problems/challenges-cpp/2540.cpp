#include <iostream>

using namespace std;

int main() {

  int n, x;
  while(cin >> n) {

    int count1 = 0, count0 = 0;

    for (int i = 0; i < n; i++) {
      cin >> x;
      if (x == 1) count1++;
      else count0++;
    }

    double result = double(count1)/(double(count1) + double(count0));
    double min = double(2)/double(3);

    if (result >= min) cout << "impeachment" << endl;
    else cout << "acusacao arquivada" << endl;

  }

  return 0;
}
#include <iostream>

using namespace std;

int main() {

  int n, count0 = 0, count1 = 0;
  cin >> n;
  char x;

  for (int i = 0; i < n; i++) {

    cin >> x;

    if(x == 'z') count0++;
    else if (x == 'n') count1++;

  }

  for (int i = 0; i < count1; i++) {
    cout << 1 << " ";
  }
  if (count0 == 0) cout << endl;

  for (int i = 0; i < count0; i++) {
    cout << 0 << " ";
  }
  cout << endl;


  return 0;
}
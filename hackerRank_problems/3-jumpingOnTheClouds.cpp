#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int main() {

  int n, i, qnt = 0, n0 = 0;
 int atual = 0;
  cin >> n;
  int c[n];

  for (i = 0; i < n; i++) {
    cin >> c[i];
  }

  /*for (i = 0; i < n-1; i++) {
    if(c[i+1] == 0) {
      atual.push_back(c[i+1]);
      atual.size();
    } else {
      atual.push_back(c[i+1]);
      qnt++;
    }
  }*/
  /*
  c[n] = 0;
  for (i = 1; i < n; i++) {
    if(c[i] == 0 && c[i+1] != 1) {
      n0++;
    } else if (c[i+1] == 1) {
      n0 == 0;
    }
    if (n0 == 3 || n0 == 2 && c[i+1] == 0 && c[i] == 0 && c[i-1] == 0) {
      qnt++;
    }
    if(c[i+1] == 1 && n0 <= 2) {
      qnt++;
    }
    if(c[i-1] == 1) {
      qnt++;
    }
  }
  */
  i = 0;
  while(atual < n) {
    if (c[atual] == 0 && c[atual+1] == 0 && c[atual+2] == 0) {
      atual = atual + 2;
      qnt++;
    } else if (c[atual+1] == 0 && c[atual+2] == 1) {
      atual++;
      qnt++;
    } else if (c[atual+1] == 1) {
      atual = atual + 2;
      qnt++;
    } else {
      atual++;
    }
  }
  

  cout << qnt << endl;


  return 0;

}
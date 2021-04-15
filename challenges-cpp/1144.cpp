#include <iostream>

using namespace std;

int main(){

  int n, i = 1, j = 1;
  cin >> n;

  while (j <= n * 2) {

    if (j % 2 != 0){
      cout << i << " " << i * i << " " << i * i * i << endl;
    } else {
      cout << i << " " << i * i + 1 << " " << i * i * i + 1 << endl;
      i++;
    }

    j++;

  }

  return 0;

}
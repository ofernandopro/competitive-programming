#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
typedef long long ll;
#define f first
#define s second

using namespace std;

int main() {

  int a = max(2, 3);
  int b = min(5, a);

  cout << a << " " << b << endl;

  // Máximo elemento de vetor (Também pode ser usado para achar o maior valor em um conjunto com mais de 2 valores)
  int v2[] = {0,1,2,3,5000,5,6,7,8,9};
  cout << *max_element(v2, v2 + 10) << endl;

  // Max de char:
  char e = max('a','z');
  cout << e << endl;

  return 0;
}

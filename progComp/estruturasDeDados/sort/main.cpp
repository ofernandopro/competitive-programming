#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
#include <functional>   // greater
typedef long long ll;
#define f first
#define s second

using namespace std;

int main() {

  // Complexidade sort = O(nlog(n))

  vector<int> v;
  v.push_back(8); v.push_back(26); v.push_back(15); v.push_back(65); v.push_back(23);
  int n = 3;

  // Ordena todo o vetor v
  sort(v.begin(), v.end());

  // Ordena o vetor v de [início, início+n)
  sort(v.begin(), v.begin()+n);

  // Ordena o vetor v de forma decrescente
  sort(v.begin(), v.end(), greater<int>());


  for(int i = 0; i < v.size(); i++) {
    cout << v[i] << " ";
  }
  cout << endl;


  return 0;
}

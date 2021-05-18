#include <iostream>

typedef long long ll;

using namespace std;

int main() {

  ll n;
  cin >> n;
  bool primo = true;

  for (ll i = 2; i*i <= n; i++) {
    if (n % i == 0) primo = false; 
  }

  if (primo && n > 1) cout << "sim" << endl;
  else cout << "nao" << endl;

  return 0;
}
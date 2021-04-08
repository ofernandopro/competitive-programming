#include <iostream>
#include <vector>

using namespace std;

int main () {

  int n, x; 
  cin >> n;

  int i, counterIn = 0, counterOut = 0; // Contadores
  vector<int> numeros;

  for (i = 0; i < n; i++) {
    cin >> x;
    numeros.push_back(x);
  }

  for (vector<int>::const_iterator i = numeros.begin(); i != numeros.end(); ++i){
    if (*i >= 10 && *i <= 20)
      counterIn++;
    else 
      counterOut++;
  }

  cout << counterIn << " in" << endl;
  cout << counterOut << " out" << endl;
  

  return 0;

}
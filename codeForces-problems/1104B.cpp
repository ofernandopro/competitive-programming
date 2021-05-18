#include <iostream>
#include <string>

using namespace std;

int main() {

  string s;
  cin >> s;
  int winner = 0;
  int tam = s.size();

  for (int i = 0; i < tam-1; i++) {
    if (s[i] == s[i+1]) {
        s.erase(i,2); 
        tam -= 2;
        winner++;
        i = -1;
    }
  }

  if (winner % 2 == 0)
    cout << "No" << endl;
  else
    cout << "Yes" << endl;

  return 0;
}
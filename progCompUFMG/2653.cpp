#include <iostream>
#include <string>
#include <set>

using namespace std;

int main() {

	string joiaString;
  set<string> setTesouro;

  while(cin >> joiaString) {
    setTesouro.insert(joiaString);
  }

  cout << setTesouro.size() << endl;

	return 0;
}
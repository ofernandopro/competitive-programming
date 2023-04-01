#include <iostream>
#include <string>

using namespace std;

int boca(string sAux) {

	int result = 0;
	unsigned short i;

	for (i = 0; sAux[i]; ++i)
		result = ((result * 10) + (sAux[i] - '0')) % 3;

	return result;

}

int main () {

	string s;
	cin >> s;

	cout << boca(s) << endl;

  return 0;

}

#include <iostream>
#include <cstring>
#include <string>
#include <algorithm> // sort, funções de max e min
#include <functional> // greater
#include <vector>
#include <utility> // pair
#include <iterator>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <math.h>

using namespace std;

int main() {
  string S;
  cin >> S;

  for(int i = 0; i < S.length(); i++) {
    if(S[i] >= 65 && S[i] <= 90) {
      S[i] = S[i] + 32;
    }
  }

  size_t found = S.find("zelda");

  if(found!=std::string::npos){
    cout << "Link Bolado" << endl;
  } else {
    cout << "Link Tranquilo" << endl;
  }

  return 0;
}
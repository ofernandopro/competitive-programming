#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
#include <functional>
#include <vector>
#include <utility>
#include <iterator>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <math.h>

using namespace std;

bool ePrimo(int num) {

  if(num == 0 || num == 1){
    return false;
  }

  if(num == 2) {
    return true;
  }

  if(num % 2 == 0){
    return false;
  }

  for(int i = 3; i <= sqrt(num); i += 2) {
    if(num % i == 0){
      return false;
    }
  }
  return true;
}

bool eSuperPrimo(int num) {
  while(num >= 10) {
    int aux = num % 10;
    num /= 10;
    if(!ePrimo(aux)) {
      return false;
    }
  }

  if(num == 2 || num == 3 || num == 7 || num == 5) {
    return true;
  } else {
    return false;
  }
}

int main() {
  int N;

  while(cin >> N) {
    if(!ePrimo(N)) {
      cout << "Nada" << endl;
    } else {
      if(eSuperPrimo(N)) {
        cout << "Super" << endl;
      } else {
        cout << "Primo" << endl;
      }
    }
  }

  return 0;
}
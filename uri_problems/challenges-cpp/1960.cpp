#include <iostream>
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
#define f first
#define s second

#define dbg(x) cout << #x << " = " << x << endl;

typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

using namespace std;

int main() { _

  int n, total;
  cin >> n;
  vector<int> num;

  auto rom = to_string(n); // Transformando inteiro em string

  for (int i = 0; i < rom.size(); i++) {
    string s(1, rom[i]); // Transformando char em string
    int a = stoi( s ); // Transformando string em inteiro
    total = a * pow(10, rom.size()-i-1);
    num.push_back(total);
  }

  for (int i = 0; i < num.size(); i++) {
    
    if(num[i] == 900)
      cout << "CM";
    else if (num[i] == 90)
      cout << "XC";
    else if (num[i] == 9)
      cout << "IX";
    else if (num[i] == 400)
      cout << "CD"; 
    else if (num[i] == 40)
      cout << "XL";
    else if (num[i] == 4)
      cout << "IV";
    else {
      while (num[i] > 0) {
        if(num[i] >= 500){
          cout << "D";
          num[i] -= 500;
        } else if(num[i] >= 100) {
          cout << "C";
          num[i] -= 100;
        } else if(num[i] >= 50) {
          cout << "L";
          num[i] -= 50;
        } else if(num[i] >= 10) {
          cout << "X";
          num[i] -= 10;
        } else if(num[i] >= 5) {
          cout << "V";
          num[i] -= 5;
        } else if(num[i] >= 1) {
          cout << "I";
          num[i] -= 1;
        }
      }
    }

  }

  cout << endl;

  return 0;
}
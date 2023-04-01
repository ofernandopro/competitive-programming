#include <iostream>
#include <string>
#include <algorithm> // sort, erase, funções de max e min
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

void printVec(vector<int> arr) {
  for (int i = 0; i < arr.size(); i++)
    cout << arr[i] << " ";
  cout << endl;
}
/*
bool isValid(string s) {

  if (s.size() % 2 != 0) {
    return false;
  }

  stack<char> s1;
  s1.push(s[0]);

  int i = 0;

  while(i < s.size()-1) {
    char pBracket = s[i];
    char pReversedBracket = getReversedBracket(s[i]);

    char bracket = s[i+1];
    char reversedBracket = getReversedBracket(s[i+1]);

    //s1.push(pBracket);
    s1.push(bracket);
    i++;

    // [{}())]

    if (bracket == pReversedBracket) {
      s1.pop();
      s1.pop();
      i++;
      s1.push(s[i]);
    }

  }

}
*/


bool isLeftBracket(char c) {
  if (c == '[' || c == '(' || c == '{') {
    return true;
  } else {
    return false;
  }
}

char getReversedBracket(char bracket) {
  switch (bracket) {
  case '[':
    return ']';
    break;
  case ']':
    return '[';
    break;
  case '{':
    return '}';
    break;
  case '}':
    return '{';
    break;
  case '(':
    return ')';
    break;
  case ')':
    return '(';
    break;
  default:
    return '.';
    break;
  }
}

bool isValid(string s) {

  if (s.size() % 2 != 0) {
    return false;
  }

  stack<char> s1;

  for (int i = 0; i < s.size(); i++) {

    char rev = getReversedBracket(s[i]);

    if (isLeftBracket(s[i])) {
      s1.push(s[i]);
    }
    else {
      if (s1.empty() || (s1.top() != rev))
        return false;
      s1.pop();
    }

  }
  return s1.empty();

}

int main() { _

  string s;
  s = "[(){()[]}]";

  if (isValid(s)) {
    cout << "1" << endl;
  } else {
    cout << "0" << endl;
  }

  return 0;
}
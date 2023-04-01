#include <iostream>
#include <vector>

using namespace std;

bool allTrue(vector<bool> v, int index) {
  if (index == 2) return true;
  if (v[index] == 0) return false;
  v.erase(v.begin());
  return allTrue(v, index+1);
}

int main() {

  vector<bool> v;
  v.push_back(true);
  v.push_back(true);
  v.push_back(false);

  if (allTrue(v, 0)) cout << "true" << endl;
  else cout << "false" << endl;

  return 0;
}
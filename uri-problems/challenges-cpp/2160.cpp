#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  
  string form;
  getline (cin, form);

  if (form.size() <= 80)
    cout << "YES" << endl;
  else cout << "NO" << endl;
  

  return 0;
}
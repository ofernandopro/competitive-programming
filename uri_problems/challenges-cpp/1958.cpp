#include <iostream>
#include <sstream>

using namespace std;

int main() {

  int i = 0, cont = 0;
  double x;
  bool negativo = false, is_float = false;
  char inteira;

  cin >> x;
  auto str = to_string(x); 

  while(i < 6) {
    
    i++;
  }

  cout << str << " " << str.size() <<  endl;
/*
  if (str[0] == '-') negativo = true;
  if(negativo) inteira = str[1];
  else inteira = str[0];

  for (i = 0; i < str.size(); i++) {  
    if (str[i] == '.') is_float = true;
  }

  for (i = 0; i < str.size(); i++) {
    
    if (str[i] == '.'){
      cont = 0;
    }
    

  }
  cout << endl;
*/
  return 0;
}
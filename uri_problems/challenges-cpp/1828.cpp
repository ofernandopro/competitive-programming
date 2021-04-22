#include <iostream>
#include <string>

using namespace std;

int main() {

  int n, i;
  string sheldon, raj;
  cin >> n;

  for (i = 0; i < n; i++) {
    cin >> sheldon >> raj;

    if (sheldon == raj) {
      cout << "Caso #" << i+1 << ": De novo!" << endl;
    } else {

      if (sheldon == "tesoura" && raj == "papel" || 
          sheldon == "papel" && raj == "pedra" || 
          sheldon == "pedra" && raj == "tesoura" ||
          sheldon == "pedra" && raj == "lagarto" ||
          sheldon == "lagarto" && raj == "Spock" || 
          sheldon == "Spock" && raj == "tesoura" || 
          sheldon == "tesoura" && raj == "lagarto" || 
          sheldon == "lagarto" && raj == "papel" || 
          sheldon == "papel" && raj == "Spock" || 
          sheldon == "Spock" && raj == "pedra") {
            cout << "Caso #" << i+1 << ": Bazinga!" << endl;
      } else {
        cout << "Caso #" << i+1 << ": Raj trapaceou!" << endl;
      }

    }

  }


  return 0;
}
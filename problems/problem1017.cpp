#include <iostream>
#include <iomanip>
using namespace std;

#define CONSUMO 12

int main()
{

  int tempo, velMedia;
  float distancia;
  float qntLitros;

  cin >> tempo;
  cin >> velMedia;

  distancia = tempo * velMedia;

  cout << fixed << setprecision(3) << distancia / CONSUMO << endl;

  return 0;
}
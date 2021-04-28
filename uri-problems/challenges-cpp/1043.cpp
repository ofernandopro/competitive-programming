#include <iostream>
#include <iomanip>
#include <algorithm>    // std::sort

using namespace std;

bool myfunction (int i,int j) { return (i<j); }

int main() {

  double A, B, C;
  int i;
  double perimetro, areaTrapezio;

  cin >> A >> B >> C;

  double lados[] = {A, B, C};
  int n = sizeof(lados) / sizeof(lados[0]);

  // Usando a função para ordenar de forma crescente
  sort (lados, lados+n, myfunction);

  if(lados[0] + lados[1] <= lados[2]) {
    // Não pode existir um triângulo quando a soma dos dois lados menores é menor que o lado maior
    areaTrapezio = ((A + B) * C) / 2;
    cout << "Area = " << fixed << setprecision(1) << areaTrapezio << endl;
  } else {
    perimetro = A + B + C;
    cout << "Perimetro = " << fixed << setprecision(1) << perimetro << endl;
  }

  return 0;

}

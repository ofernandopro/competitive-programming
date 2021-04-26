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

  ll numAlunos, matriculaDoMaior, matricula;
  double nota;
  cin >> numAlunos;
  //map<ll, double> alunos;

  double maior = numeric_limits<int>::min();

  for (int i = 0; i < numAlunos; i++) {
    cin >> matricula >> nota;
    //alunos.insert(pair<ll, double>(matricula, nota));

    if(nota > maior) {
      maior = nota;
      matriculaDoMaior = matricula;
    }
  }

  if(maior >= 8.0)
    cout << matriculaDoMaior << endl;
  else 
    cout << "Minimum note not reached" << endl;


  return 0;
}
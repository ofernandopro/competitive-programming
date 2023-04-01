#include <iostream>
#include <string>
#include <algorithm> // sort, funções de max e min, count
#include <vector>
#include <utility> // pair
#include <iterator>
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

struct Point {
  float x, y;
};

float area (Point q, Point r, Point s)
{
    return (q.x - s.x) * (r.y - s.y) - (r.x - s.x) * (q.y - s.y);
}

bool inTriangle (Point p, Point q, Point r, Point s)
{
    float a1, a2, a3;
    bool areaMenor, areaMaior;

    a1 = area(p, q, r);
    a2 = area(p, r, s);
    a3 = area(p, s, q);

    areaMenor = (a1 < 0) || (a2 < 0) || (a3 < 0);
    areaMaior = (a1 > 0) || (a2 > 0) || (a3 > 0);

    return !(areaMenor && areaMaior);
}

int main() { _

  Point p;
  p.x = 5.0;
  p.y = 5.5;

  Point q;
  q.x = 4.0;
  q.y = 8.0;

  Point r;
  r.x = 4.0;
  r.y = 5.0;

  Point s;
  s.x = 8.0;
  s.y = 5.0;

  if (inTriangle(p, q, r, s))
    cout << "pertence" << endl;
  else cout << "nao" << endl;

  return 0;
}


/*

bool inTriangle(Ponto p, Ponto q, Ponto r, Ponto s) {
	int intersecoes = 0;
	Trace uma reta com início no ponto p e passando pelo ponto (INF, INF)
	Chame o Algoritmo que checa se há interseção entre segmentos com o seguinte código:
	IF há intersecao:
		intersecoes += 1

	IF intersecoes % 2 == 0:
		retorne FALSO
	ELSE IF intersecoes % 2 != 0 && (intersecao ocorre em q ou r ou s):
		retorne FALSE
	ELSE:
		retorne TRUE
}


*/
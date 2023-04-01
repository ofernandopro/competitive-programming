#include <iostream>
#include <iomanip>
#include <vector>
#include <utility>
#include <algorithm>
#include <cmath>
#include <ctime>

using namespace std;

const double NUM = 1e-9;

struct ponto;
typedef vector<ponto> poligono;

struct ponto {
  double x, y;

  ponto(double x = 0.0, double y = 0.0) : x(x), y(y) { }

  double compr() {
    return sqrt(x * x + y * y);
  }
  
  double compr2() {
    return x * x + y * y;
  }

  ponto normalize() {
    return (*this) / compr();
  }

  ponto operator-(ponto p) {
    return ponto(x - p.x, y - p.y);
  }

  ponto operator+(ponto p) {
    return ponto(x + p.x, y + p.y);
  }

  ponto operator*(double k) {
    return ponto(x * k, y * k);
  }

  ponto operator/(double k) {
    return ponto(x / k, y / k);
  }

  bool operator<(const ponto& p) const {
    if (fabs(x - p.x) >= NUM) {
      return x < p.x;
    }
    return (y < p.y);
  }

  bool operator==(const ponto p) {
    return (fabs(x - p.x) < NUM && fabs(y - p.y) < NUM);
  }

};

double distancia(ponto x, ponto y) {
  return (x - y).compr();
}

double dot(ponto a, ponto b) {
  return a.x * b.x + a.y * b.y;
}

double cross(const ponto& a, const ponto& b, const ponto& c) {
  return (b.x - a.x) * (c.y - a.y) - (b.y - a.y) * (c.x - a.x);
}

void getConvexHull(poligono P, poligono& hull) {
  int n = P.size();
  int k = 0;

  hull.resize(2 * n);

  sort(P.begin(), P.end());

  for (int i = 0; i < n; ++i) {
    while (k >= 2 && (int)cross(hull[k - 2], hull[k - 1], P[i]) < 0) {
      k--;
    }
    hull[k++] = P[i];
  }

  for (int i = n - 2, t = k + 1; i >= 0; i--) {
    while (k >= t && (int)cross(hull[k - 2], hull[k - 1], P[i]) < 0) {
      k--;
    }
    hull[k++] = P[i];
  }

  hull.resize(k);
  hull.pop_back();
}

#define _ ios_base::sync_with_stdio(0);cin.tie(0);

int main() { _
    
    int N;

    while (cin >> N && N) {
      double X, Y;
      poligono pAux, hull;

      while (N--) {
        cin >> X >> Y;
        pAux.push_back(ponto(X, Y));
      }

      int soma = 0;
      while (pAux.size() != 0) {
        getConvexHull(pAux, hull);

        sort(pAux.begin(), pAux.end());
        sort(hull.begin(), hull.end());
        
        if (hull.size()) {
          soma++;
        }

        int i = 0, j = 0;

        while (i < hull.size()) {
          if (hull[i] == pAux[j]) {
            pAux.erase(pAux.begin() + j);
            i++;
          } else {
            j++;
          }
        }
      }

      if (soma % 2) {
        cout << "Take this onion to the lab!" << endl;
      } else {
        cout << "Do not take this onion to the lab!" << endl;
      }
    }

    return 0;
}
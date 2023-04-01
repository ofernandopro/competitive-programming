#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
#include <functional>
#include <vector>
#include <utility> 
#include <iterator>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <math.h>

#define distancia(A, B) A.dist(B)

using namespace std;

struct ponto {
    int x, y;
    ponto(int _x, int _y): x(_x), y(_y) {}
    ponto() {}
    
    float dist(ponto p2) {
      float pot1 = pow(float(p2.x - x), 2.0);
      float pot2 = pow(float(p2.y - y), 2.0);
      return sqrt(pot1 + pot2);
    }
};

float getArea(ponto a, ponto b, ponto c, ponto d) {
    float d1 = (distancia(a,d) + distancia(a,c) + distancia(c,d)) / 2;
    float s = sqrt(d1 * (d1 - distancia(a,d)) * (d1 - distancia(a,c)) * (d1 - distancia(c,d)));
    
    float d2 = (distancia(a,b) + distancia(a,c) + distancia(b,c)) / 2;
    float s2 = sqrt(d2 * (d2 - distancia(a,b)) * (d2 - distancia(a,c)) * (d2 - distancia(b,c)));
    
    return s + s2;
}

float product(ponto a, ponto b, ponto c) {
  float p = b.x*c.y - c.x*b.y + c.x*a.y - a.x*c.y + a.x*b.y - b.x*a.y;
  return p;
}

bool eConvexo(ponto pontosQ[4]) {
  float ant = 0;
  for (int i = 0; i < 4; i++) {
    float c = product(pontosQ[(i) % 4], pontosQ[(i+1) % 4], pontosQ[(i+2) % 4]);
    if(c != 0) {
      if(c * ant < 0) return false;
      ant = c;
    }
  }
  return true;
}


ponto pontos[5];
vector<int> inds = {0,1,2,3,4};

void getRes() {
    
    float areaMax = -1;
    
    do {
        ponto pontosQuad[4] = { pontos[inds[0]], pontos[inds[1]], pontos[inds[2]], pontos[inds[3]] };
        if(!eConvexo(pontosQuad)) {
          continue;
        }
        
        float area = getArea(pontos[inds[0]], pontos[inds[1]], pontos[inds[2]], pontos[inds[3]]);
        if(area > areaMax) areaMax = area;
    } while(next_permutation(inds.begin(), inds.end())); //Generate next permutation till it is not lexicographically largest
    
    cout << (int)round(areaMax) << endl;
}

int main(int argc, const char * argv[]) {
    
    while(true) {
        bool aux = false;

        for(int i = 0; i < 5; i++) {
            int X, Y;
            cin >> X >> Y;

            pontos[i] = ponto(X, Y);
            if(X != 0 || Y != 0) {
              aux = true;
            }
        }
        if(!aux) {
          break;
        }
        getRes();
    }
    
    return 0;
}

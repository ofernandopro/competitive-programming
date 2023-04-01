#include <iostream>
#include <stdio.h>
#include <cstdlib>

using namespace std;

struct Vertice {
	int U, V, W;
};

int galAux[1000100];
Vertice gal[1000100];

int pai(int ver) {
	if (ver == galAux[ver]) {
		return ver;
  }
	return pai(galAux[ver]);
}

int getCusto(int a, int b) {

	unsigned sol = 0, aux1, aux2;

	for (unsigned i = 0; i < b; ++i) {
		galAux[i] = i;
  }

	for (unsigned i = 0; i < a; ++i) {
		aux2 = pai(gal[i].V);
		aux1 = pai(gal[i].U);

		if (aux1 != aux2) {
			galAux[aux1] = galAux[aux2];
      sol += gal[i].W;
    }

	}
	return sol;

}

int compare(const void *x, const void *y) {
  const Vertice *p1 = static_cast<const Vertice *>(x);
  const Vertice *p2 = static_cast<const Vertice *>(y);

	return p2->W - p1->W;
}

void reverse(Vertice *ver, int pri, int seg) { 
  Vertice v; 
  while (pri < seg) { 
    v = ver[pri];    
    ver[pri] = ver[seg]; 
    ver[seg] = v; 
    pri++; 
    seg--; 
  }
} 

int main() {

	int N;
	int U, V, W;

	cin >> N;

	for (int i = 0; i < N; ++i) {
    cin >> gal[i].U >> gal[i].V >> gal[i].W;
  }

	qsort(gal, N, sizeof(Vertice), compare);

  cout << getCusto(N, N) << endl;

	reverse(gal, 0, N);

  cout << getCusto(N, N) << endl;
	
	return 0;

}

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

typedef long long ll;
int x, y, d;

int calc(int n) {
  int aux = n;
  for (int i = 2; i * i <= n; i++) {

    if(n % i == 0) {

      while(n % i == 0) {
        n /= i;
      }

      aux -= aux/i;

    }

  }

  if(n > 1) {
    aux -= aux/n;
  }

  return aux;
}

ll getRes(ll a, ll b, ll c) {

  ll res = 1;
  while (b) {

    if (b & 1) {
      res = (res * a) % c;
    }
    
    a = (a * a) % c;
    b >>= 1;

  }

  return res;

}


void alg(int a, int b) {
  if (!b) {
    x = 1;
    y = 0;
    d = a;

    return;
  }

  alg(b, a % b);
  
  int x1 = y;
  int y1 = x - (a / b) * y;
  x = x1;
  y = y1;
}

int getModAlg(int a, int b) {
    alg(a, b);
    return (x % b + b) % b;
}

int main() {

  int N, E, C, aux;

  cin >> N;
  cin >> E;
  cin >> C;
  
  aux = calc(N);

  int val = getModAlg(E, aux);
  cout << getRes(C, val, N) << endl;

  return 0;

}

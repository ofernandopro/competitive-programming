#include <iostream>
#include <string>

#define TAM 100100
#define TAMST TAM << 2
typedef long long ll;
ll arr1[TAM];
ll arr2[TAMST];

using namespace std;

int getCont(ll n) {

  int res = 0;
  while (n) {
    res += n & 1LL;
    n >>= 1LL;
  }

  return res;

}

void constr(int a, int b, int c) {

  if (b != c) {
    int m = (b + c) >> 1;
    constr((a << 1) | 1, b, m);
    constr((a << 1) + 2, m + 1, c);
    arr2[a] = arr2[(a << 1) | 1] | arr2[(a << 1) + 2];
  } else {
    arr2[a] = arr1[b];
  }
    
}

ll getInterv(int a, int b, int c, int aux, int aux2) {

  if (aux > c || aux2 < b) {
    return 0LL;
  }

  if (b >= aux && c <= aux2) {
    return arr2[a];
  }

  int des = (b + c) >> 1;

  return getInterv((a << 1) | 1, b, des, aux, aux2) | getInterv((a << 1) + 2, des + 1, c, aux, aux2);

}

void getRes(int p, int l, int r, int x, ll w) {

  if (x > r || x < l) {
    return;
  } else if (l == x && r == x) {
    arr2[p] &= ~arr1[x];
    arr1[x] = w;
    arr2[p] |= arr1[l];
  } else {
    int des = (l + r) >> 1;
    getRes((p << 1) | 1, l, des, x, w);
    getRes((p << 1) + 2, des + 1, r, x, w);
    arr2[p] = arr2[(p << 1) | 1] | arr2[(p << 1) + 2];
  }

}

int main() {

  int R, L;
  int N, Q;
  int i;

  while (scanf("%d %d %d", &N, &Q, &i) != EOF) {

    for (i = 1; i <= N; ++i) {
      cin >> R;
      arr1[i] = 1LL << (ll)R;
    }

    constr(1, 1, N);

    while (Q--) {
      cin >> i >> R >> L;

      if (i == 1) {
        int contRes = getCont(getInterv(1, 1, N, R, L));
        cout << contRes << endl;
      } else {
        getRes(1, 1, N, R, 1LL << (ll)L);  
      }      
    }

    return 0;

  }

  return 0;

}

#include <iostream>

#define NUM 1000000
#define MAX 2

void calcAns(unsigned long long a[MAX][MAX],unsigned long long b[MAX][MAX]){

  unsigned long long aux[MAX][MAX] = {{0}};

  for(int i = 0; i < MAX; i++) {
    for(int j = 0; j < MAX; j++) {
      for(int k = 0; k < MAX;k++) {
        aux[i][j] += (a[i][k] % NUM * b[k][j] % NUM) % NUM;
      }
    }
  }
     
  for(int i = 0;i < MAX; i++) {
    for(int j = 0; j < MAX; j++) {
      a[i][j] = aux[i][j] % NUM;
    }
  }

}

void chamaCalcRes(unsigned long long m[2][2], unsigned long long n, unsigned long long res[2][2]){
  res[0][0] = 1;
  res[1][1] = 1;
  res[1][0] = 0;
  res[0][1] = 0;

 while(n > 0){
   if(n % 2 == 0){
     calcAns(m,m);
     n /= 2;
   }
   else{
     calcAns(res,m);
     n--;
   }
 }
}

unsigned long long N, K, L;

int main() {

  N = 0;
  K = 0;
  L = 0;

  while(scanf("%llu %llu %llu", &N, &K, &L) != EOF){

    unsigned long long aux[2][2]= {{1,0},{0,1}};
    unsigned long long aux2[2][2] = {{0}};
    unsigned long long mat[2][2] = {{0, L % NUM}, {1, K % NUM}};
    unsigned long long matAux[2][2] = {{1, K % NUM}, {0,0}};
    unsigned long long n = N/5;

    chamaCalcRes(mat, n, aux);
    calcAns(matAux, aux);

    printf("%06llu\n", matAux[0][0]);
  }

  return 0;
}
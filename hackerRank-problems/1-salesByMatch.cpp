#include <iostream>
#include <iomanip>

using namespace std;

int main() {

  int n, numero;
  int qntPar = 0;
  int i, j, cont, aux; // counters
  cin >> n;
  int ar[n];


    for (i = 0; i < n; i++) {
      cin >> numero;
      ar[i] = numero;
    }

    for(i=0;i<n;i++){
          for(j=i+1;j<n;j++){
              if(ar[i]>ar[j]){
                  aux=ar[i];
                  ar[i]=ar[j];
                  ar[j]=aux;
              }
          }
      }
      for(i=0;i<n;i++){
              cont=0;
          for(j=0;j<n;j++){
              if(ar[i]==ar[j]){
                  cont++;
              }

          }
          if(i == 0) ar[i-1] = -1202320;
          if(ar[i] != ar[i-1]){
            qntPar = qntPar + cont / 2;
          }
      }

      cout << qntPar << endl;

  

  return 0;
}
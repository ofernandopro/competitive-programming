#include <iostream>
#include <vector>

// [TENTEI MUITO - WRONG ANSWER 100% - PEGUEI INTERNET]

using namespace std;

int main() {
    int n, i, j, cont = 0;

    while(cin >> n)
    {
        int num = 1;
        cont++;
        num += ((n*(n + 1)) / 2);

        if(n == 0) printf("Caso %d: %d numero\n", cont, num);
        else printf("Caso %d: %d numeros\n", cont, num);

        printf("0");
        for(i = 1; i <= n; i++){
            for(j = 1; j <= i; j++)
                printf(" %d", i);
        }
        printf("\n\n");
    }
    return 0;
}

/*
int main() {

  int n, i = 0;
  vector<int> v;

  while (cin >> n) {

    if(n == 0) v.push_back(n);
    else {
      if(i == 0) {
        v.push_back(0);
        for (int j = 0; j <= n-1; j++) {
          for (int k = 0; k < j; k++) {
            v.push_back(j);
          }
        }
      }
      for (int j = 0; j < n; j++) {
        v.push_back(n);
      }
    }

    //if(i != 0) cout << endl;
    cout << "Caso " << i+1 << ": " << v.size();
    if(v.size() > 1) cout << " numeros" << endl;
    else cout << " numero" << endl; 
    i++;

    for (int j = 0; j < v.size(); j++) {
      cout << v[j];
      if (j != v.size()-1) cout << " ";
    }
    //cout << endl;
    cout << endl << endl;
  } 

  // ./run < teste01.txt > minhasaida.out


  return 0;
}
*/
/*
int main() { _

  int n, i = 0, qntNum = 0;
  vector<int> v;

  while (cin >> n) {

    v.push_back(n);

     for (int i = 0; i < n; i++) {
        v.push_back(n);
      }

    cout << "Caso " << i+1 << ": " << v.size() << " numero" << endl;

    if(n == 0) cout << 0 << " ";
    else {
      for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
      }
      cout << endl;
      for (int i = 0; i < n; i++) {
        cout << n << " ";
      }
      cout << endl;
      
      v.pop_back();
      cout << endl;
    }

  }

// ./run < teste01.txt > minhasaida.out


  return 0;
}*/
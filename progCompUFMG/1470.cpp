/*#include <iostream>
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

  int N;
  cin >> N;

  vector<int> v1;
  int soma = 0;

  for (int i = 0; i < N; i++) {
    int v;
    cin >> v;
    v1.push_back(v);
    soma += v;
  }

  int M;
  cin >> M;

  vector<int> v2;

  for (int i = 0; i < M; i++) {
    int w;
    cin >> w;
    v2.push_back(w);
  }

  if (M == 1) {

    if (soma == v2[0]) {
      cout << "S" << endl;
    } else {
      cout << "N" << endl;
    }

  } else if (N == M) {
    if (v1 == v2) {
      cout << "S" << endl;
    } else {

      bool isEqual = true;
      int j = N-1;
      for (int i = 0; i < N; i++) {
        if (v1[i] != v2[j]) {
          isEqual = false;
        }
        j--;
      }
      if (isEqual) {
        cout << "S" << endl;
      } else {
        cout << "N" << endl;
      }

    }
  }
  
   else {

    int indiceEsq = N - M;
    int indiceDir = M;

    stack<int> sDireita;
    stack<int> sEsquerda;

    for (int i = 0; i < N; i++) {
      if (i >= N-M) {
        sEsquerda.push(v1[i]);
      }
      if (i >= M) {
        sDireita.push(v1[i]);
      }
    }

    dbg(sDireita.size());

    vector<int> vRespEsq;
    vector<int> vRespDir;
    int cont = 0;

    for (int i = 0; i < M; i++) {
      
      if (i < M - indiceEsq) {
        vRespEsq.push_back(sEsquerda.top());
      } else {
        vRespEsq.push_back(sEsquerda.top()+v1[cont]);
        cont++;
      }
      sEsquerda.pop();
    }

    vector<int> vInvertidoDir;
    int cont2 = 0;

    while (!sDireita.empty()) {
      dbg(sDireita.top());
      vInvertidoDir.push_back(sDireita.top());
      sDireita.pop();
    }

    for (int i = 0; i < M; i++) {
      
      if (i >= M-vInvertidoDir.size()) {
        vRespDir.push_back(v1[i]+vInvertidoDir[cont2]);
        cont2++;
      } else {
        vRespDir.push_back(v1[i]);
      }

    }

    if (v2 == vRespEsq || v2 == vRespDir) {
      cout << "S" << endl;
    } else {
      cout << "N" << endl;
    }

  }

  return 0;
}*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

struct Elem  {
	int size;
	vector<int> nums;
	vector<struct Elem> filhos;
};

struct Nums {
	Elem ini;
	Elem fim;
	bool find;
	
	Nums(Elem ini, Elem fim) {
		this->ini = ini;
		this->fim = fim;
		this->find = false;
	}
	
	void getElems(Elem e) {

		if(this->find == false) {
			if((e.size == this->fim.size) && (equal(e.nums.begin(), e.nums.end(), this->fim.nums.begin()))) {
				this->find = true;
				return;
			}
			
			if((e.size > 1) && (e.size > fim.size)) {
				int filhosTam = 0;
				
				for(int i = 1; i < e.size; i++) {
					int ini = i - 1, fim = i;
					Elem filho;
					
					while(1) {
						if(ini < 0 || fim == e.size) {
              break;
            }
						
						filho.nums.push_back(e.nums[ini] + e.nums[fim]);
						
						ini--;
						fim++;
					}
					
					if(ini < 0 && fim < e.size) {
						for(int i = fim; i < e.size; i++)
							filho.nums.push_back(e.nums[i]);
					} else if(ini >= 0 && fim == e.size) {
						for(int i = ini; i >= 0; i--)
							filho.nums.push_back(e.nums[i]);
					}
					
					filho.size = filho.nums.size();
				
					if(filho.size >= this->fim.size) {
						e.filhos.push_back(filho);
						
						filhosTam++;
						
						if(filho.size > 1) {
							vector<int> vCop;

							reverse_copy(filho.nums.begin(), filho.nums.end(), back_inserter(vCop));
							
							if(!equal(filho.nums.begin(), filho.nums.end(), vCop.begin())) {
								
                Elem fAux;
								fAux.size = filho.size;
								fAux.nums = vCop;
								
								e.filhos.push_back(fAux);
								
								filhosTam++;
							}
						}
					}
				}
				
				for(int i = 0; i < filhosTam; i++) {
          getElems(e.filhos[i]);
        }
			}
		}
	}
	
	void checkIfSequenceExists() {

		vector<int> vAux;
		reverse_copy(this->ini.nums.begin(), this->ini.nums.end(), back_inserter(vAux));
		
    if((equal(this->fim.nums.begin(), this->fim.nums.end(), vAux.begin()))) {
			this->find = true;
    } else {
			if(this->fim.size == 1) {
				int soma = accumulate(this->ini.nums.begin(), this->ini.nums.end(), 0);
				if(soma == this->fim.nums[0]) {
					this->find = true;
        } else {
					this->find = false;
        }
			} else {
        getElems(this->ini);
      }
		}
		
		if(this->find) {
      cout << "S" << endl;
    } else {
      cout << "N" << endl;
    }

	}
	
};

int main() {
	int N;
	
	while(scanf("%d", &N) != EOF) {
		Elem ini, fim;
		
		ini.size = N;
		for(int i = 0; i < N; i++) {
			int w;
			cin >> w;
			ini.nums.push_back(w);
		}
		
		int M;
		
		cin >> M;
		fim.size = M;
		
		for(int i = 0; i < M; i++) {
			int w;
			cin >> w;
			fim.nums.push_back(w);
		}
		
		Nums maq(ini, fim);
		maq.checkIfSequenceExists();

	}

	return 0;
}
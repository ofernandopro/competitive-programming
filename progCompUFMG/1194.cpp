/*
#include <iostream>
#include <string>
#include <map>

#define dbg(x) cout << #x << " = " << x << endl;

using namespace std;

int preIndex = 0;

void printPost(string in, string pre, int inStrt, int inEnd, map<int, int> hm) {

	if (inStrt > inEnd)
		return;		

	int inIndex = hm[pre[preIndex++]];

	printPost(in, pre, inStrt, inIndex - 1, hm);
	printPost(in, pre, inIndex + 1, inEnd, hm);

	cout << in[inIndex];
}

void printPostMain(string in, string pre, int n) {

	map<int,int> hm;
	hm.clear();
	for (int i = 0; i < n; i++)
		hm[in[i]] = i;
		
	printPost(in, pre, 0, n - 1, hm);

}

int main() {

	int C;
	cin >> C;

	for (int i = 0; i < C; i++) {

		int N;
		cin >> N;
		string S1 = "", S2 = "";
		cin >> S1;
		cin >> S2;

		cout << "size " << S1.size() << endl;
		dbg(S1);
		dbg(S2);

		printPostMain(S2, S1, S1.size());
		cout << endl;

	}

	// string pre = "ABCDEF";
	// string in = "CBAEDF";
	
	// printPostMain(in, pre, pre.size());
  // cout << endl;

	return 0;
}
*/

#include <iostream>
#include <string>

using namespace std;

int achaValor(int valor, char infixa[], int n) {

   for (int i = 0; i < n; ++i) {
      if (infixa[i] == valor) {
         return i;
      }
   }
   return -1;

}

int retornaPosfixa(char prefixa[], char infixa[], int n) {

	int raiz = achaValor(prefixa[0], infixa, n);

	if(raiz != 0) {
		retornaPosfixa(prefixa + 1, infixa, raiz);
	}
	
	if (raiz != n-1) {
		retornaPosfixa(prefixa + raiz + 1, infixa + raiz + 1, n - raiz - 1);
	}

	cout << prefixa[0];

}

int main() {

	int C;
	cin >> C;

	for (int i = 0; i < C; i++) {

		int n;
		cin >> n;
	
		string pre, in;
		cin >> pre;
		cin >> in;
		
		char prefixa[pre.size()];
		char infixa[in.size()];

		for (int j = 0; j < pre.size(); j++) {
			prefixa[j] = pre[j];
			infixa[j] = in[j];
		}
   
		int size = sizeof(prefixa)/sizeof(prefixa[0]);

  	retornaPosfixa(prefixa, infixa, size);
		cout << endl;

	}

  return 0;

}
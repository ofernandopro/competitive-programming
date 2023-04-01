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

vector<string> splitString(string s){
	
	string temp = "";
  vector<string> v;
	for(int i=0; i < s.length(); ++i){
		
		if(s[i]==' '){
			v.push_back(temp);
			temp = "";
		}
		else{
			temp.push_back(s[i]);
		}
		
	}
	v.push_back(temp);

  return v;
	
}

int main() { _

int tam;

  while (cin >> tam != 0) {

    char tipo;
    cin >> tipo;

    if (tam == 0) {
      break;
    }
  
    if (tipo == 'S') {

      string msgString;
      cin >> msgString;

      //string msgString = to_string(msgInt);

      vector<string> vFirstLine;
      vector<string> vSecondLine;
      vector<string> vThirdLine;

      for (int i = 0; i < msgString.size(); i++) {
        if (msgString[i] == '0') {
          vFirstLine.push_back(".*");
          vSecondLine.push_back("**");
          vThirdLine.push_back("..");
        } else if (msgString[i] == '1') {
          vFirstLine.push_back("*.");
          vSecondLine.push_back("..");
          vThirdLine.push_back("..");
        } else if (msgString[i] == '2') {
          vFirstLine.push_back("*.");
          vSecondLine.push_back("*.");
          vThirdLine.push_back("..");
        } else if (msgString[i] == '3') {
          vFirstLine.push_back("**");
          vSecondLine.push_back("..");
          vThirdLine.push_back("..");
        } else if (msgString[i] == '4') {
          vFirstLine.push_back("**");
          vSecondLine.push_back(".*");
          vThirdLine.push_back("..");
        } else if (msgString[i] == '5') {
          vFirstLine.push_back("*.");
          vSecondLine.push_back(".*");
          vThirdLine.push_back("..");
        } else if (msgString[i] == '6') {
          vFirstLine.push_back("**");
          vSecondLine.push_back("*.");
          vThirdLine.push_back("..");
        } else if (msgString[i] == '7') {
          vFirstLine.push_back("**");
          vSecondLine.push_back("**");
          vThirdLine.push_back("..");
        } else if (msgString[i] == '8') {
          vFirstLine.push_back("*.");
          vSecondLine.push_back("**");
          vThirdLine.push_back("..");
        } else {
          vFirstLine.push_back(".*");
          vSecondLine.push_back("*.");
          vThirdLine.push_back("..");
        }  
      }

      for (int i = 0; i < vFirstLine.size(); i++) {
        cout << vFirstLine[i] << " ";
      }
      cout << endl;

      for (int i = 0; i < vSecondLine.size(); i++) {
        cout << vSecondLine[i] << " ";
      }
      cout << endl;

      for (int i = 0; i < vThirdLine.size(); i++) {
        cout << vThirdLine[i] << " ";
      }
      cout << endl;

    } else {

      string s1;
      vector<string> v1;
      vector<string> vFirstLine;
      vector<string> vSecondLine;
      vector<string> vThirdLine;

      for (int i = 0; i < 3; i++) {
        getline(cin, s1);
        //cout << endl << s1 << endl;
        v1 = splitString(s1);
      }

      for (int i = 0; i < v1.size(); i++) {
         cout << v1[i] << endl;
      }

      //cout << s1 << endl;

      for (int i = 0; i < tam*3; i++) {
        if (i < tam) {
          vFirstLine.push_back(v1[i]);
        } else if (i < tam*2) {
          vSecondLine.push_back(v1[i]);
        } else {
          vThirdLine.push_back(v1[i]);
        }
      }

      vector<int> vInt;

      for (int i = 0; i < vFirstLine.size(); i++) {
        if (vFirstLine[i] == "*." && vSecondLine[i] == "..") {
          vInt.push_back(1);
        } else if (vFirstLine[i] == "*." && vSecondLine[i] == "*.") {
          vInt.push_back(2);
        } else if (vFirstLine[i] == "**" && vSecondLine[i] == "..") {
          vInt.push_back(3);
        } else if (vFirstLine[i] == "**" && vSecondLine[i] == ".*") {
          vInt.push_back(4);
        } else if (vFirstLine[i] == "*." && vSecondLine[i] == ".*") {
          vInt.push_back(5);
        } else if (vFirstLine[i] == "**" && vSecondLine[i] == "*.") {
          vInt.push_back(6);
        } else if (vFirstLine[i] == "**" && vSecondLine[i] == "**") {
          vInt.push_back(7);
        } else if (vFirstLine[i] == "*." && vSecondLine[i] == "**") {
          vInt.push_back(8);
        } else if (vFirstLine[i] == ".*" && vSecondLine[i] == "*.") {
          vInt.push_back(9);
        } else {
          vInt.push_back(0);
        }

      }

      for (int i = 0; i < vInt.size(); i++) {
        cout << vInt[i];
      }
      cout << endl;

    }
  }

  return 0;
}
*/

#include <cstdio>
#include <cstring>
#include <iostream>
#include <string>

using namespace std;

char brailleMatriz[10][6] = {{'.','*','*','*','.','.'}, 
                      {'*','.','.','.','.','.'}, 
                      {'*','.','*','.','.','.'}, 
                      {'*','*','.','.','.','.'},
                      {'*','*','.','*','.','.'}, 
                      {'*','.','.','*','.','.'}, 
                      {'*','*','*','.','.','.'}, 
                      {'*','*','*','*','.','.'}, 
                      {'*','.','*','*','.','.'}, 
                      {'.','*','*','.','.','.'}};

void numParaBraille(int d) {

  string s1;
  getline(cin, s1);
  int tam;
  tam = s1.length();

  for(int i = 0; i < 3; i++) {
    for(int j = 0; j < tam; j++) {
      if (j > 0) {
        cout << " ";
      }
      cout << brailleMatriz[s1[j]-'0'][2*i] << brailleMatriz[s1[j]-'0'][2*i+1];
    }
    cout << endl;
  }

}

void braParaNum(int d) {

  char b[3][310];
  string s1;
  int tam;

  for(int i = 0; i < 3; i++) {
    getline(cin, s1);
    tam = s1.length();
    
    for (int j = 0; j < tam; j += 3)
      b[i][j*2/3] = s1[j], b[i][j*2/3+1] = s1[j+1];
  }

  for(int i = 0; i < d; i++) {
    for(int j = 0; j < 10; j++) {
      if (brailleMatriz[j][0] == b[0][i*2] && brailleMatriz[j][1] == b[0][i*2+1] && brailleMatriz[j][2] == b[1][i*2] && brailleMatriz[j][3] == b[1][i*2+1] && brailleMatriz[j][4] == b[2][i*2] && brailleMatriz[j][5] == b[2][i*2+1]) {
        cout << j;
        break;
      }
    }
  }
  cout << endl;
  
}

int main() {

  int D;
  char tipo;

  while (scanf("%d", &D) && D) {
    cin >> tipo;
    getchar();

    if (tipo == 'B') {
      braParaNum(D);
    } else {
      numParaBraille(D);
    }
    
  }

  return 0;

}



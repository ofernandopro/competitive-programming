#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
  
const int N = 1000011;
  
int xs[N], contPrimos;

int main() { _
    bitset<15486045> bSet;
    unordered_map<int,int> unMap;

    int T, x, n, contPrimos = 0;
    
    bSet.set();
    xs[0] = 1;
    xs[1] = 2;
    contPrimos = 2;
    for (long long i = 4; i <= 15486043; i+= 2) {
        bSet.reset(i);
    }
    long long i;
    for(i = 3; contPrimos < N && i <= 15486043; i += 2) {
        if(bSet[i]) {
            xs[contPrimos++] = i;
            for(long long j = i*i; j <= 15486043; j += i) {
                bSet.reset(j);
            }
        }
    }
    
    cin >> T;
      
    for (int j = 1; j <= T; ++j) {
    	cin >> n;
    	unMap.clear();
        for (int i = 0; i < n; ++i) {
        	cin >> x;
            unMap[x] = 1;
        }
        
        for (int i = 0; i < contPrimos; ++i) {
    		if (!unMap[xs[i]]) {
        		cout << xs[i] - 1 << endl;
        		break;
        	}
        }
    }

    return 0;
}
#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include <functional>
#include <vector>
#include <utility>
#include <iterator>
#include <set>
#include <map>
#include <queue>
#include <stack>

using namespace std;

int N, P, imp = 25000000, matriz[2010][1010];
pair<int,int> feiticos[1010];

int getMinQnt(int p, int num){
    if(p <= 0) {
        return 0;
    }

    if(num == N) {
        return 25000000;
    }

    if(matriz[p][num] != -1) {
        return matriz[p][num];
    }

    return matriz[p][num] = min(feiticos[num].second + getMinQnt(p - feiticos[num].first, num + 1), getMinQnt(p, num + 1));
}

int main(){
    while(cin >> N >> P){
        memset(matriz, -1, sizeof matriz);
        
        for(int i = 0; i < N; i++) {
            cin >> feiticos[i].first >> feiticos[i].second;
        }
        
        int minQnt = getMinQnt(P, 0);

        if(minQnt != imp) {
            cout << minQnt << endl;
        } else {
            cout << "-1" << endl;
        }
    }
    return 0;
}
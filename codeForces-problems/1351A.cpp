#include <iostream>
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

  int t;
  cin >> t;
  string s;
  vector<pair<int, int> > coords;

  for (int i = 0; i < t; i++) {

    cin >> s;
    pair<int, int> coordI;
    coordI.first = 0;
    coordI.second = 0;
    coords.push_back(coordI);
    map<pair<int, int>, int> m;    

    for (int j = 0; j < s.size(); j++) { // O(nˆ2) - 10ˆ9

      if(s[j] == 'N') coordI.second++;
      else if(s[j] == 'S') coordI.second--; 
      else if(s[j] == 'E') coordI.first++;
      else if(s[j] == 'W') coordI.first--;
      coords.push_back(coordI);


      m[{coordI}] = 1;

    }

    for(map<pair<int,int>, int >::const_iterator it = m.begin();
    it != m.end(); ++it) {
        cout << it->first.first << " " << it->first.second << " " << it->second << "\n";
    }


    /*for(int i = 0; i < coords.size(); i++){
      //if(coords[i].first == coords[i+1].second);
      m[{coords[i].first, coords[i].second}] = 0;
    }*/


  }

  return 0;
}



/*
int main() { _

  int t;
  cin >> t;
  string s;
  vector<pair<pair<int, int>, pair<int, int>> > coords;

  for (int i = 0; i < t; i++) {

    cin >> s;
    pair<pair<int, int>, pair<int, int> > coordI;
    coordI.first.first = 0;
    coordI.first.second = 0;
    coordI.second.first = 0;
    coordI.second.second = 0;
    coords.push_back(coordI);

    for (int j = 0; j < s.size(); j++) { // O(nˆ2) - 10ˆ9
      pair<pair<int, int>, pair<int, int> > coord;
      if(s[j] == 'N') coord.second.second++;
      else if(s[j] == 'S') coord.second.second--; 
      else if(s[j] == 'E') coord.second.first++;
      else if(s[j] == 'W') coord.second.first--;
      coords.push_back(coord);
    }

    

  }

  return 0;
}
*/
/*
#include <bits/stdc++.h>


using namespace std;

map<string, pair<string, string> > mAux;
vector<pair<string, string> > vPair;
vector<pair<string, string> > vPair2;

int main () {
  string nt, pl, aux;
  stringstream mem;
  int res, M, T, iAux;
    
  mAux["C#"] = pair<string, string>("C#", "Db");
  mAux["D#"] = pair<string, string>("D#", "Eb");
  mAux["F#"] = pair<string, string>("F#", "Gb");
  mAux["G#"] = pair<string, string>("G#", "Ab");
  mAux["A#"] = pair<string, string>("A#", "Bb");
  
  mAux["Db"] = pair<string, string>("C#", "Db");
  mAux["Eb"] = pair<string, string>("D#", "Eb");
  mAux["Gb"] = pair<string, string>("F#", "Gb");
  mAux["Ab"] = pair<string, string>("G#", "Ab");
  mAux["Bb"] = pair<string, string>("A#", "Bb");
    
  mAux["D"] = pair<string, string> ("D", "D");
  
  mAux["B#"] = pair<string, string>("C", "B#");
  mAux["E"] = pair<string, string>("E", "Fb");
  mAux["E#"] = pair<string, string>("E#", "F");
  mAux["B"] = pair<string, string>("B", "Cb");
  
  mAux["C"] = pair<string, string>("C", "B#");
  mAux["Fb"] = pair<string, string>("E", "Fb");
  mAux["F"] = pair<string, string>("E#", "F");
  mAux["Cb"] = pair<string, string>("B", "Cb");
  
  mAux["A"] = pair<string, string>("A", "A");
  mAux["G"] = pair<string, string>("G", "G");
  
  while(1) {
    cin >> M >> T;
    if (!M && !T) {
      return 0;
    }
    
    getchar();
    getline(cin, nt);

    mem << nt;

    while(mem >> aux) {
      vPair.push_back(mAux[aux]);
    }
    mem.clear();
    
    getline(cin, pl);

    mem << pl;
    while(mem >> aux) {
      vPair2.push_back(mAux[aux]);
    }
          
    mem.clear();
    
    res = 0;
    for (int i = 0, k = 0; i < T && k < M;) {
      iAux = k;
      res = 0;

      while(vPair[k].first == vPair2[i].first || vPair[k].second == vPair2[i].second) {
          i++, k++;
          if (i >= T) {
            res = 1;    
            break;
          }
          if (k >= M) {
            res = 1;    
            break;
          }
      }
      if (res) {
        break;
      }
      k = iAux + 1;
      i = 0;
    }    

    if (res) {
      cout << "S" << endl;
    } else {
      cout << "N" << endl;
    }
      
    vPair.clear();
    vPair2.clear();
  }

  return 0;
}
*/

#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
#include <functional> 
#include <vector>
#include <utility>
#include <iterator>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <math.h>
#include <sstream>

using namespace std;
typedef pair<string,string> pairSS;
map<string, pairSS > m;
vector<pairSS > v;
vector<pairSS > v2;

int main () {
	string nt;
	string pl;
	string aux;
	
	stringstream mem;
	
	int fl, n, t, lb, u;
	
	m["C#"] = pairSS("C#", "Db");
	m["D#"] = pairSS("D#", "Eb");
	m["F#"] = pairSS("F#", "Gb");
	m["G#"] = pairSS("G#", "Ab");
	m["A#"] = pairSS("A#", "Bb");
	
	m["Db"] = pairSS("C#", "Db");
	m["Eb"] = pairSS("D#", "Eb");
	m["Gb"] = pairSS("F#", "Gb");
	m["Ab"] = pairSS("G#", "Ab");
	m["Bb"] = pairSS("A#", "Bb");
	
	m["D"] = pairSS ("D", "D");
	
	m["B#"] = pairSS("C", "B#");
	m["E"] = pairSS("E", "Fb");
	m["E#"] = pairSS("E#", "F");
	m["B"] = pairSS("B", "Cb");
	
	m["C"] = pairSS("C", "B#");
	m["Fb"] = pairSS("E", "Fb");
	m["F"] = pairSS("E#", "F");
	m["Cb"] = pairSS("B", "Cb");
	
	
	m["A"] = pairSS("A", "A");
	m["G"] = pairSS("G", "G");
	
	while(1) {
		cin >> n >> t;
		if (!n && !t) {
      return 0;
    }
		
		getchar();
		getline(cin, nt);

		mem << nt;

		while(mem >> aux) {
			v.push_back(m[aux]);
    }

		mem.clear();
		
		getline(cin, pl);
		mem << pl;

		while(mem >> aux) {
			v2.push_back(m[aux]);
    }
			
		mem.clear();
		
		fl = 0;
		for (int i = 0, k = 0 ; i < t && k < n;) {
			u = k;
			fl = 0;
			while(v[k].first == v2[i].first || v[k].second == v2[i].second) {
				i++;
				k++;
				if (i >= t) {
					fl = 1;	
					break;
				}
				if (k >= n) {
					fl = 1;	
					break;
				}
			}
			if (fl) {
        break;
      }
			k = u + 1;
			i = 0;
		}	
		if (fl) {
      cout << "S" << endl;
    } else {
      cout << "N" << endl;
    }
		
		v.clear();
		v2.clear();
	}
}
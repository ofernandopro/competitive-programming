/*#include <iostream>
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

using namespace std;

typedef long long ll;
typedef set<int, bool(*)(int a, int b)> set1;

struct ponto {
	ll x, y;
	
	ponto() {
    x = 0;
    y = 0;
  }

	ponto(ll a, ll b) {
    x = a; 
    y = b;
  }
	
	bool operator<(const ponto rhs) const {
		if(x < rhs.x) {
      return true;
    } else {
      return false;
    }
	}

};

typedef pair<int, ponto> intPonto;

struct conj {
	ponto p;
	int tipo, id;

	conj() {
		p = ponto();
	}

	conj(ponto _p, int _t, int _s) {
		p = _p; 
    tipo = _t; 
    id = _s;
	}
	
	bool operator<(const conj rhs) const {
		if (p < rhs.p) {
      return true;
    } else if (rhs.p < p) {
      return false;
    } else if (tipo < rhs.tipo) {
      return true;
    } else {
      return false;
    }
	}
};

vector<pair<ponto,ponto> > linhas;

inline bool compLinha(const int lhs, const int rhs){
	if(linhas[lhs].first.x > linhas[rhs].first.x && linhas[lhs].first.x < linhas[rhs].second.x){
		return (linhas[rhs].second.x - linhas[rhs].first.x) * (linhas[lhs].first.y - linhas[rhs].first.y) - (linhas[rhs].second.y - linhas[rhs].first.y) * (linhas[lhs].first.x - linhas[rhs].first.x) < 0;
	} 
  else if(linhas[lhs].first.x < linhas[rhs].first.x && linhas[lhs].second.x > linhas[rhs].first.x){
		return (linhas[lhs].second.x - linhas[lhs].first.x)*(linhas[rhs].first.y - linhas[lhs].first.y) - (linhas[lhs].second.y - linhas[lhs].first.y) * (linhas[rhs].first.x - linhas[lhs].first.x) > 0;
	}
	return false;
}

set1 setLinha(compLinha);
vector<intPonto> baloes;
vector<conj> conjs;
vector<intPonto> vLinhas;

int N, C;

intPonto getp(int p) {
	if (p == vLinhas[p].first) {
    return vLinhas[p];
  }
	
	intPonto pp = getp(vLinhas[p].first);
	
	if (pp.second.x == -1) {
		vLinhas[p].second.y = pp.second.y;
  } else {
    vLinhas[p] = pp;
  }
	
	vLinhas[p].first = p;
	
	return vLinhas[p];
}

int main() {

	while (cin >> N >> C) {

		linhas.assign(N, pair<ponto, ponto>());
		conjs.assign(N * 2 + C, conj());
		vLinhas.assign(N, intPonto(-1, ponto(-1, -1)));
		baloes.assign(C, intPonto(-1, ponto(-1, -1)));

		int i = 0;

		for (; i < N; ++i) {
			vLinhas[i].first = i;

			cin >> linhas[i].first.x >> linhas[i].first.y;
			cin >> linhas[i].second.x >> linhas[i].second.y;
			
			if (linhas[i].second < linhas[i].first) {
				swap(linhas[i].first, linhas[i].second);
      }
				
			if (linhas[i].first.y > linhas[i].second.y) {
				vLinhas[i].second.x = linhas[i].first.x;
      } else if (linhas[i].first.y < linhas[i].second.y) { 
				vLinhas[i].second.x = linhas[i].second.x;
      } else {
				vLinhas[i].second.x = -1;
				vLinhas[i].second.y = linhas[i].first.y;
			}
			
			conjs[i * 2].p = linhas[i].first;
			conjs[i * 2].tipo = 0;
			conjs[i * 2].id = i;
			
			conjs[i * 2 + 1].p = linhas[i].second;
			conjs[i * 2 + 1].tipo = 2;
			conjs[i * 2 + 1].id = i;
		}

		i *= 2;
		
		for (int k = 0; k < C; ++k, ++i) {
			cin >> conjs[i].p.x;
			conjs[i].tipo = 1;
			conjs[i].id = k;
			baloes[k].second.x = conjs[i].p.x;
		}

		sort(conjs.begin(), conjs.end());
		
		setLinha.clear();
		set1 :: const_iterator it;
		
		for (int q = 0; q < (int)conjs.size(); ++q) {
			if (conjs[q].tipo == 0) {
				setLinha.insert(conjs[q].id);
				if (linhas[conjs[q].id].first.y > linhas[conjs[q].id].second.y) {
					it = setLinha.find(conjs[q].id);
					++it;

					if (it != setLinha.end()) {
						vLinhas[conjs[q].id].first = *it;
          }

				}
			}
			else if (conjs[q].tipo == 2) {
				if (linhas[conjs[q].id].second.y > linhas[conjs[q].id].first.y) {
					it = setLinha.find(conjs[q].id);
					++it;
					if (it != setLinha.end()) {
						vLinhas[conjs[q].id].first = *it;
          }
				}
				setLinha.erase(conjs[q].id);
			}			
			else if (conjs[q].tipo == 1) {
				if (setLinha.size() > 0) {
					baloes[conjs[q].id].first = *(setLinha.begin());
        }
      }
		}
		for (int q = 0; q < C; ++q) {
			if (baloes[q].first == -1) {
        cout << baloes[q].second.x;
      } else {
				intPonto up = getp(baloes[q].first);
				cout << (up.second.x != -1? up.second.x : baloes[q].second.x);
				if (up.second.y != -1) cout << ' ' << up.second.y;
				cout << '\n';
			}
		}
		linhas.clear();
		conjs.clear();
		vLinhas.clear();
		baloes.clear();
	}

  return 0;
}*/

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

using namespace std;

int N, C;

struct ponto {
  int x, y;
};

struct seg {
    ponto p1, p2;
    seg(ponto _p1, ponto _p2): p1(_p1), p2(_p2) {}
    seg(){}
    
    int pontoPara = -1;
    int escapeAt = -1;
};

struct ev {
    short int t;
    int evSeg;
    int xp;
    int qpos;
    ev(){}
};

vector<ev> evs;
seg segs[100010];

bool compSeg(int s1, int s2) {
	if(segs[s1].p1.y == segs[s2].p1.y) {
			return segs[s1].p2.y < segs[s2].p2.y;
	}
	return segs[s1].p1.y < segs[s2].p1.y;
}


bool compEv(ev e1, ev e2){
    if(e1.xp < e2.xp) {
			return true;
		}
    if(e1.xp > e2.xp) {
			return false;
		}
    
    if(e1.t == 1 && e2.t == 3) {
			return true;
		}
    if(e1.t == 3 && e2.t == 2) {
			return true;
		}
    return false;
}

typedef set<int, bool(*)(int,int)> setType;

int proxS(int x, setType &s) {
    setType::iterator it;
    it = s.find(x);
    it++;
    if(it == s.end()) {
			throw "error";
		} else {
			return *it;
		}
}


int main() {
    while (scanf("%d %d", &N, &C) != EOF) {
        
        if(evs.size() > 0) evs.clear();
        
        setType atSeg (compSeg);
        string qRes[C];
        int qs[C];
        vector<pair<int, int>> vPair;
        
        for(int n = 0; n < N; n++) {
            ponto p1, p2;
						cin >> p1.x >> p1.y >> p2.x >> p2.y;
            
            if(p1.x > p2.x) {
							swap(p1, p2);
						}
            
            seg s = seg(p1, p2);
            segs[n] = s;

            ev e; 
						e.t = 1; 
						e.xp = p1.x; 
						e.evSeg = n;
            ev e2; 
						e2.t = 2; 
						e2.xp = p2.x; 
						e2.evSeg = n;
            
            evs.push_back(e);
            evs.push_back(e2);
        }
        
        for(int q = 0; q < C; q++){
            int x;
            cin >> x;
            ev e; 
						e.t = 3; 
						e.xp = x; 
						e.qpos = q;
            qs[q] = x;
            evs.push_back(e);
        }
        
        sort(begin(evs), end(evs), compEv);
        
        for(vector<ev>::iterator it = begin(evs); it != end(evs); ++it){
            ev e = *it;

            if(e.t == 1) {
                atSeg.insert(e.evSeg);

                if(segs[e.evSeg].p1.y > segs[e.evSeg].p2.y) {
                    try {
                        int next = proxS(e.evSeg, atSeg);
                        segs[e.evSeg].pontoPara = next;
                    } catch(char const* exc) {
                        segs[e.evSeg].pontoPara = -1;
                        segs[e.evSeg].escapeAt = segs[e.evSeg].p1.x;
                    }
                }
            }else if(e.t == 2) {
                if(segs[e.evSeg].p2.y > segs[e.evSeg].p1.y) {
                    try {
                        int next = proxS(e.evSeg, atSeg);
                        segs[e.evSeg].pontoPara = next;
                    }catch(char const* exc) {
                        segs[e.evSeg].pontoPara = -1;
                        segs[e.evSeg].escapeAt = segs[e.evSeg].p2.x;
                    }
                }
                atSeg.erase(e.evSeg);
            }else if(e.t == 3) {
                if(atSeg.size() == 0) {
                    qRes[e.qpos] = to_string(e.xp);
                }else{
                    int touch = *atSeg.begin();
                    vPair.push_back({e.qpos, touch});
                }
            }
        }
        
        for(vector<pair<int, int>>::iterator it = begin(vPair); it != end(vPair); ++it) {
            int q = it->first; 
						int segPos = it->second;
            int lP = -1;
            while (true) {
                if(segs[segPos].escapeAt != -1) {
                    qRes[q] = to_string(segs[segPos].escapeAt);
                    break;
                }else if(segs[segPos].pontoPara != -1){
                    int newSegPos = segs[segPos].pontoPara;
                    if(segs[segPos].p1.y > segs[segPos].p2.y) {
                        lP = segs[segPos].p1.x;
                    }else{
                        lP = segs[segPos].p2.x;
                    }
                    segPos = newSegPos;
                    continue;
                }else{
                    if(lP == -1) {
											lP = qs[q];
										}
                    qRes[q] = to_string(lP).append(" ").append(to_string(segs[segPos].p1.y));
                    break;
                }
            }
        }
        
        for(int i = 0; i < C; i++){
            cout << qRes[i] << endl;
        }
        
    }
    return 0;
}

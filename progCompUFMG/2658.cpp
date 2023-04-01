#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>
using namespace std;

typedef long long ll;

int N, Q;

class SegTree {
    
public:
    
    int nts[9];
    bool leaf = false;
    int lMost, rMost, aux = 0;
    
    SegTree(){}
    
    SegTree *lc, *rc;
    
    SegTree(int lMost, int rMost) {
      this->lMost = lMost;
      this->rMost = rMost;
              
      if(lMost == rMost) {
        nts[1] = rMost-lMost+1;;
        leaf = true;
      } else {
        int mid = (rMost+lMost)/2;
        lc = new SegTree(lMost, mid);
        rc = new SegTree(mid + 1, rMost);
        rec();
      }
    }
    
    void rec() {
      if(leaf) return;
      int *n1 = lc->nts;
      int *n2 = rc->nts;
      
      if(lc->aux > 0) lc->getp(lc->lMost, lc->rMost);
      if(rc->aux > 0) rc->getp(rc->lMost, rc->rMost);
      
      for(int i = 0; i < 9; i++) {
        nts[i] = n1[i] + n2[i];
      }
    }
    
    void getp(int l, int r) {
      if(aux > 0) {
          
        int vet[9];
        
        for(int i = 0; i < 9; i++) {
            vet[(i+aux)%9] = nts[i];
        }
        
        for(int i = 0; i < 9; i++) nts[i] = vet[i];
        
        if(!leaf) {
          lc->aux += aux;
        }
        if(!leaf) {
          rc->aux += aux;
        }
        
        aux = 0;
      }
    }
    
    void intervUp(int F, int l, int r) {
      if(l > rMost || r < lMost) return;
      
      getp(l, r);
      
      if(l <= lMost && r >= rMost) {
          aux += F;
          getp(l, r);
          return;
      }
      
      lc->intervUp(F, l, r);
      rc->intervUp(F, l, r);

      rec();
    }
    
    void rFreq(int l, int r, vector<int> &ans) {
        
      if(l > rMost || r < lMost) {
        return;
      }
      
      getp(l, r);
      
      if(l <= lMost && r >= rMost) {
        for(int i = 0; i < 9; i++) {
          ans[i] += nts[i];
        }
        return;
      }
      
      lc->rFreq(l, r, ans);
      rc->rFreq(l, r, ans);
    }

    void imp() {
      for(int i = 0; i < N; i++) {
        vector<int> ans = vector<int>(9, 0);
        rFreq(i, i, ans);
        for(int j = 0; j < 9; j++) {
          if(ans[j] > 0) {
            cout << j << endl;
          }
        }
      }
    }
    
};


int main(int argc, const char * argv[]) {
    
    scanf("%d %d", &N, &Q);
    
    SegTree segTree(0, N-1);
    
    for(int i = 0; i < Q; i++) {
        int A, B;
        cin >> A >> B;
        
        vector<int> freqs = vector<int>(9, 0);
        segTree.rFreq(A, B, freqs);
        
        int mfNt = 0;
        for(int i = 1; i < 9; i++) {
          if((freqs[i] == freqs[mfNt] && i > mfNt) || freqs[i] > freqs[mfNt]) {
            mfNt = i;
          }
        }

        segTree.intervUp(mfNt, A, B);
    }
    
    segTree.imp();
    
    return 0;
}

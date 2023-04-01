#include <iostream>
#include <queue>
#include <stack>

using namespace std;

int main() {

  int n;

  while (cin >> n) {

    queue<int> q;
    stack<int> s;
    priority_queue<int> pq;

    bool canBeQueue = true;
    bool canBeStack = true;
    bool canBePriorityQueue = true;

    for (int i = 0; i < n; i++) {

      int comando;
      int x;
      cin >> comando;
      cin >> x;

      if (comando == 1) {

        q.push(x);
        s.push(x);
        pq.push(x);

      } else {

        int qAux = q.front();
        q.pop();
        int sAux = s.top();
        s.pop();
        int pqAux = pq.top();
        pq.pop();

        if (qAux != x) {
          canBeQueue = false; 
        }
        if (sAux != x) {
          canBeStack = false;
        }
        if (pqAux != x) {
          canBePriorityQueue = false;
        }

      }

    }

    if ((canBeQueue && canBeStack) || (canBeQueue && canBePriorityQueue) || (canBeStack && canBePriorityQueue)) {
      cout << "not sure" << endl;
    } else if (canBeQueue) {
      cout << "queue" << endl;
    } else if (canBeStack) {
      cout << "stack" << endl;
    } else if (canBePriorityQueue) {
      cout << "priority queue" << endl;
    } else {
      cout << "impossible" << endl;
    }
  
  }

  return 0;
}
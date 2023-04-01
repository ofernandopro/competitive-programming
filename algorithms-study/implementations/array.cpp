#include <iostream>
#include <string>
#include <algorithm> // sort, erase, funções de max e min
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

void printVec(vector<int> arr) {
  for (int i = 0; i < arr.size(); i++)
    cout << arr[i] << " ";
  cout << endl;
}


// ------> Function to left Rotate arr[] of size n by 1
void leftRotatebyOne(int arr[], int n) {
    int temp = arr[0], i;
    for (i = 0; i < n - 1; i++)
        arr[i] = arr[i + 1];
 
    arr[n-1] = temp;
}
 
// ------> Function to left rotate arr[] of size n by d
void leftRotate(int arr[], int d, int n) {
    for (int i = 0; i < d; i++)
        leftRotatebyOne(arr, n);
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}

int main() { _

  // Array declaration by specifying size 
  int arr1[10];

  // With recent C/C++ versions, we can also declare an array of user specified size
  int n = 10;
  int arr2[n];

  // Array declaration by initializing elements
  int arr[] = { 10, 20, 30, 40 }

  // Array declaration by specifying size and initializing elements
  int arr[6] = { 10, 20, 30, 40 }

  arr[3 / 2] = 2; // this is same as arr[1] = 2



  // How to rotate an array:
  int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
  int n = sizeof(arr) / sizeof(arr[0]);
 
  // Function calling
  leftRotate(arr, 2, n);
  printArray(arr, n);


  return 0;
}
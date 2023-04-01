
// ACCEPTED 15/11/2022

#include <iostream>
#include <vector>

using namespace std;

bool validMountainArray(vector<int>& arr) {

  if (arr.size() < 3) {
    return false;
  }

  if (arr[1] <= arr[0]) {
    return false;
  }

  int isPeak = 0;

  for (int i = 1; i < arr.size()-1; i++) {
    if (arr[i+1] == arr[i]) {
      return false;
    }
    if (arr[i-1] < arr[i] && arr[i] > arr[i+1]) {
      isPeak++;
    }
    if (arr[i-1] > arr[i] && arr[i] < arr[i+1]) {
      return false;
    }
  }

  if (isPeak == 1) {
    return true;
  }
  return false;

/*
  if (arr.size() < 3) {
    return false;
  }

  int INF = 0x3f3f3f3f;
  int max = -INF;
  int maxIndex;

  for (int i = 0; i < arr.size(); i++) {
    if (arr[i] > max) {
      max = arr[i];
      maxIndex = i;
    }
  }

  if (maxIndex == 0 || maxIndex == arr.size()-1) {
    return false;
  }

  int cont = true;
  for (int i = 1; i <= maxIndex; i++) {
    if (arr[i] <= arr[i-1]) {
      cont = false;
    }
  }

  if (cont == false) {
    return false;
  }

  int cont2 = true;
  for (int i = maxIndex+1; i < arr.size(); i++) {
    if (arr[i] >= arr[i-1]) {
      cont2 = false;
    }
  }

  if (cont && cont2) {
    return true;
  } else {
    return false;
  }
*/
}

int main() {

  vector<int> nums;
  nums.push_back(0);
  nums.push_back(3);
  nums.push_back(6);
  nums.push_back(5);
  nums.push_back(4);
  nums.push_back(9);

  if (validMountainArray(nums)) {
    cout << "v" << endl;
  } else {
    cout << "f" << endl;
  }

  return 0;
}
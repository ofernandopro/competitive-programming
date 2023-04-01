

// -----> ACCEPTED 14/11/2022

#include <iostream>
#include <vector>

using namespace std;

int removeElement(vector<int>& nums, int val) {

  vector<int> numsAux;
  int countValidNumbers = 0;

  for (int i = 0; i < nums.size(); i++) {
    if (nums[i] != val) {
      numsAux.push_back(nums[i]);
      countValidNumbers++;
    }
  }

  int invalidNumbers = nums.size() - countValidNumbers;

  nums = numsAux;

  cout << countValidNumbers << ", nums = [";
  for (int i = 0; i < numsAux.size(); i++) {
    cout << numsAux[i];
    if (i != numsAux.size()-1) {
      cout << ",";
    }
  }

  for (int i = 0; i < invalidNumbers; i++) {
    cout << ",_";
    if (i == invalidNumbers-1) {
      cout << "]";
    }
  }
  cout << "\n";

  return countValidNumbers;

}

int main() {

  vector<int> nums;
  nums.push_back(0);
  nums.push_back(1);
  nums.push_back(2);
  nums.push_back(2);
  nums.push_back(3);
  nums.push_back(0);
  nums.push_back(4);
  nums.push_back(2);

  removeElement(nums, 2);

  return 0;
}
/* 
  Title - 189. Rotate array
  Link - https://leetcode.com/problems/rotate-array/
  Author - Sanjoy Paul
  Approach - Two pointer

 */

#include <iostream>
#include <vector>
using namespace std;

void rotate(vector<int>& nums, int k) {
  int size = nums.size();
  k = k % size;

  reverse(nums.end()-k, nums.end());
  reverse(nums.begin(), nums.end()-k);
  reverse(nums.begin(), nums.end());
}

int main()
{
  vector<int> nums = {1,2,3,4,5,6,7};
  int k = 3;

  nums = rotate(nums, k);
  for (int n : nums) {
    cout << n << ",";
  }

  cout << endl;

  return 0;
}
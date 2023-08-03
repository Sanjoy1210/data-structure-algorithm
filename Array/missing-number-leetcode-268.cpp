/* 
  Title - 268. Missing number
  Link - https://leetcode.com/problems/missing-number/
  Author - Sanjoy Paul
  Approach - Brute force

 */

#include <iostream>
#include <vector>
using namespace std;

int missingNumber(vector<int>& nums) {
  int n = nums.size();
  int sum = (n * (n + 1)) / 2;
  int total = 0;
  for (int i : nums) {
      total += i;
  }
  return sum - total;
}

int main()
{
  vector<int> nums = {9,6,4,2,3,5,7,0,1};

  cout << missingNumber(nums) << endl;

  return 0;
}
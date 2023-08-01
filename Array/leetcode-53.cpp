/* 
  Title - 53. Maximum Subarray
  link - https://leetcode.com/problems/maximum-subarray/
  Author - Sanjoy Paul
  Approach - Kadane’s Algorithm

 */

#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int maxSubArray(vector<int>& nums) {
  long long total = accumulate(nums.begin(), nums.end(), 0);
  long long sum = 0;
  for (int i = 0; i < nums.size(); i++) {
    sum += nums[i];
    total = max(total, sum);
    if (sum <= 0) {
      sum = 0;
    }
  }
  return total;
}

int main()
{
  vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};



  return 0;
}

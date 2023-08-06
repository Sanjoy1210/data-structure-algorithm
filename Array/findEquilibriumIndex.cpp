#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int findEquilibriumIndex(vector<int> &nums)
{
  int idx = -1, leftSum = 0;
  int sum = accumulate(nums.begin(), nums.end(), 0);
  for (int i = 1; i < nums.size(); i++) {
    leftSum += nums[i-1];
    if (leftSum == sum - leftSum - nums[i]) {
      return i;
    }
  }

  return idx;
}

int main()
{
  vector<int> nums = { 1, 2, 3, 5, 4, 6, 3, 2 };

  cout << findEquilibriumIndex(nums) << endl;

  return 0;
}

/* 
  test cases:
  -7, 1, 5, 2, -4, 3, 0 --> 3
  1 2 3 4 6 --> 3
  1, 2, 3, 5, 4, 6, 3, 2 --> 4


 */
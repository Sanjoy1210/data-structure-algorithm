/* 
  Title - 724. Find pivot index
  Link - https://leetcode.com/problems/find-pivot-index/
  Author - Sanjoy Paul

 */


#include <iostream>
using namespace std;

int pivotIndex(int nums[], int n)
{
  int sum = nums[0];
  for (int i = 1; i < n; i++) {
    sum += nums[i];
  }
  int left = 0, right = sum;
  for (int i = 0; i < n; i++) {
    right -= nums[i];
    if (left == right) {
      return i;
    }
    left += nums[i];
  }
  return -1;
}

int main()
{
  int nums[] = {1,2,3};
  int n = sizeof(nums) / sizeof(int);

  int idx = pivotIndex(nums, n);

  cout << idx << endl;

  return 0;
}
/* 
  Title - 153. Find Minimum in Rotated Sorted Array
  Link - https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/description/
  Author - Sanjoy Paul
  Approach - Binary Search

 */

#include <iostream>
#include <vector>
using namespace std;

int getPivot(vector<int>& nums) {
  int s = 0, e = nums.size() - 1;
  while (s < e) {
    int mid = s + (e - s) / 2;
    if (nums[mid] >= nums[0]) {
      s = mid + 1;
    }
    else {
      e = mid;
    }
  }
  return s;
}

int findMin(vector<int>& nums) {
  int p = getPivot(nums);
  if (nums[p] > nums[0]) {
    return nums[0];
  }
  
  return min(nums[0], nums[p]);
}


int main()
{
  vector<int> nums = {4,5,6,7,0,1,2};

  cout << findMin(nums) << endl;

  return 0;
}
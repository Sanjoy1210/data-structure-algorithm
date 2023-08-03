/* 
  Title - 26. Remove Duplicates from Sorted Array
  Link - https://leetcode.com/problems/remove-duplicates-from-sorted-array/
  Author - Sanjoy Paul
  Approach - Two pointer

 */

#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int>& nums) {
  int j = 0;
  for (int i = 0; i < nums.size() - 1; i++) {
    if (nums[i] != nums[i+1]) {
      nums[j] = nums[i];
      j++;
    }
  }
  nums[j++] = nums[nums.size() - 1];
  return j;
}

int main()
{
  vector<int> nums = {0,0,1,1,1,2,2,3,3,4};

  cout << removeDuplicates(nums) << endl;

  return 0;
}
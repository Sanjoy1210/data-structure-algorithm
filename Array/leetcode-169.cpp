/* 
  Title - 169. Majority Element
  Link - https://leetcode.com/problems/majority-element/
  Author - Sanjoy Paul
  Approach - Boyer-Moore Majority Voting Algorithm

 */

#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector<int>& nums) {
  int votes = 0, candidate = -1;
  for (int i = 0; i < nums.size(); i++) {
    if (votes == 0) {
      candidate = nums[i];
      votes++;
    }
    else if (candidate == nums[i]) {
      votes++;
    }
    else {
      votes--;
    }
  }

  int cnt = 0;
  for (int i = 0; i < nums.size(); i++) {
    if (nums[i] == candidate) {
      cnt++;
    }
  }

  return cnt > nums.size() / 2 ? candidate : -1;
}

int main()
{
  vector<int> nums = {3, 1, 3};

  cout << majorityElement(nums) << endl;


  return 0;
}
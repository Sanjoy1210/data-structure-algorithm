/* 
  Title - 442. Find all duplicates in an array
  Link - https://leetcode.com/problems/find-all-duplicates-in-an-array/
  Author - Sanjoy Paul
  Approach - Hashmap

 */

#include <iostream>
#include <vector>
using namespace std;

vector<int> findDuplicates(vector<int>& nums) {
  unordered_map<int, int> mp;
  for (int i = 0; i < nums.size(); i++) {
    mp[nums[i]]++;
  }

  vector<int> res;
  for (auto it : mp) {
    if (it.second == 2) {
      res.push_back(it.first);
    }
  }
  return res;
}

int main()
{
  vector<int> nums = {4,3,2,7,8,2,3,1};

  const res = findDuplicates(arr);

  for (int n : res) {
    cout << n << ",";
  }
  cout << endl;

  return 0;
}

/* 
  Title - 1207. Unique number of occurrences
  Link - https://leetcode.com/problems/unique-number-of-occurrences/
  Author - Sanjoy Paul
  Approach - Brute force

 */

#include <iostream>
#include <vector>
using namespace std;

bool uniqueOccurrences(vector<int>& arr) {
  unordered_map<int, int> mp;
  unordered_set<int> s;

  for (int i = 0; i < arr.size(); i++) {
    mp[arr[i]]++;
  }

  for (auto it : mp) {
    s.insert(it.second);
  }

  return mp.size() == s.size();
}

int main()
{
  vector<int> arr = {1,2,2,1,1,3};

  cout << uniqueOccurrences(arr) << endl;

  return 0;
}

/* 
  1 -> 3 
  2 -> 2 
  3 -> 1

 */
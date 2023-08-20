/* 
  Title - 852. Peak Index in a Mountain Array
  Link - https://leetcode.com/problems/peak-index-in-a-mountain-array/
  Author - Sanjoy Paul
  Approach - Binary Seach, Recursion

 */

#include <iostream>
#include <vector>
using namespace std;

int peakIndexInMountainArray(vector<int>& arr, int s, int e)
{
  if (s > e) {
    return -1;
  }
  if (s == e) {
    return e;
  }

  int mid = s + (e - s) / 2;
  if (arr[mid] > arr[mid+1]) {
    e = mid;
  }
  else {
    s = mid + 1;
  }
  int idx = peakIndexInMountainArray(arr, s, e);
  return idx;
}

int main()
{
  vector<int> arr = {0,2,5,8,1,0};

  cout << peakIndexInMountainArray(arr, 0, arr.size()-1) << endl;

  return 0;
}
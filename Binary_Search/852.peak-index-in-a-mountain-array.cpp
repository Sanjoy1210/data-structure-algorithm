/* 
  Title - 852. Peak Index in a Mountain Array
  Link - https://leetcode.com/problems/peak-index-in-a-mountain-array/
  Author - Sanjoy Paul
  Approach - Binary Seach

 */

#include <iostream>
using namespace std;

int findPeak(int *arr, int n)
{
  int lo = 0, hi = n - 1;
  int ans = -1;

  while (lo < hi) {
    int mid = lo + (hi - lo) / 2;
    if (arr[mid] < arr[mid + 1]) {
      lo = mid + 1;
    }
    else {
      hi = mid;
    }
  }

  return hi;
}

int main()
{
  int arr[] = {0, 10, 5, 2};
  int n = sizeof(arr) / sizeof(int);

  int pos = findPeak(arr, n);

  cout << pos << endl;

  return 0;
}
/* 
  Title - Sort 0 1 2, 75. Sort Colors
  Links - https://www.codingninjas.com/studio/problems/sort-0-1-2_631055
         https://leetcode.com/problems/sort-colors/
  Author - Sanjoy Paul
  Approach - DNF (Dutch National Flag) Method

 */

#include <bits/stdc++.h>
using namespace std;

void print(int *arr, int n)
{
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

void sort012(int *arr, int n)
{
  // DNF method
  int low, mid, high = n-1;
  low = mid = 0;
  while (mid <= high) {
    if (arr[mid] == 0) {
      swap(arr[low], arr[mid]);
      low++;
      mid++;
    }
    if (arr[mid] == 1) {
      mid++;
    }
    if (arr[mid] == 2 and mid <= high) {
      swap(arr[mid], arr[high]);
      high--;
    }
  }
}

int main()
{
  int arr[] = {0, 1, 2, 2, 1, 0};
  int n = sizeof(arr) / sizeof(int);
  sort012(arr, n);
  print(arr, n);

  return 0;
}

/* 
  Title - Search in rotated sorted array
  Link - https://www.codingninjas.com/studio/problems/search-in-rotated-sorted-array_1082554
  Author - Sanjoy Paul

 */

#include <iostream>
using namespace std;

int getPivotIdx(int *arr, int n, int k)
{
  int st = 0, end = n - 1;
  while (st < end) {
    int mid = st + (end - st) / 2;
    if (arr[mid] >= arr[0]) {
      st = mid + 1;
    }
    else {
      end = mid;
    }
  }
  return st;
}

int binarySearch(int *arr, int s, int e, int k)
{
  int st = s, end = e;

  while (st <= end) {
    int mid = st + (end - st) / 2;
    if (arr[mid] == k) {
      return mid;
    }
    else if (arr[mid] < k) {
      st = mid + 1;
    }
    else {
      end = mid - 1;
    }
  }
  return -1;
}

int search(int *arr, int n, int k)
{
  // 1st approach
  // int p = getPivotIdx(arr, n, k);
  // if (k >= arr[p] && k <= arr[n-1]) {
  //   return binarySearch(arr, p, n-1, k);
  // }
  // return binarySearch(arr, 0, p-1, k);

  // 2nd approach
  int st = 0, end = n - 1;
  while (st <= end) {
    int mid = st + (end - st) / 2;
    if (arr[mid] == k) {
      return mid;
    }
    else if (arr[mid] > k) {
      end = mid - 1;
    }
    else {
      st = mid + 1;
    }
  }
  return -1;
}

int main()
{
  int n, k;
  cin >> n >> k;
  int arr[n+5];

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  int ans = search(arr, n, k);

  cout << ans << endl;

  return 0;
}
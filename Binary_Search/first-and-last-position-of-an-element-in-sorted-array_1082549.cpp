/* 
  Title - First and last position of an element in sorted array
  Link - https://www.codingninjas.com/studio/problems/first-and-last-position-of-an-element-in-sorted-array_1082549
  Author - Sanjoy Paul

 */

#include <iostream>
#include <vector>
using namespace std;

#define N 5003

int lowerBound(int *arr, int n, int key)
{
  int lo = 0, hi = n - 1;
  while (lo <= hi) {
    int mid = lo + (hi - lo) / 2;
    if (arr[mid] >= key) {
      hi = mid - 1;
    }
    else {
      lo = mid + 1;
    }
  }
  return arr[lo] == key ? lo : -1;
}

int upperBound(int *arr, int n, int key)
{
  int lo = 0, hi = n - 1;
  while (lo <= hi) {
    int mid = lo + (hi - lo) / 2;
    if (arr[mid] <= key) {
      lo = mid + 1;
    }
    else {
      hi = mid - 1;
    }
  }
  return arr[hi] == key ? hi : -1;
}

int main()
{
  int t, n, k;
  cin >> t;

  while (t--) {
    cin >> n >> k;
    int arr[N];
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }
    int first = lowerBound(arr, n, k);
    int last = upperBound(arr, n, k);
    cout << first << " " << last << endl;
  }

  return 0;
}
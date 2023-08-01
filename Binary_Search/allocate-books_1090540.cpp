/* 
  Title - Allocate books
  link - https://www.codingninjas.com/studio/problems/allocate-books_1090540
  Author - Sanjoy Paul

 */

#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

bool isPossible(int arr[], int n, int m, int mid)
{
  int cnt = 1, sum = 0;
  for (int i = 0; i < n; i++) {
    if (sum + arr[i] <= mid) {
      sum += arr[i];
    }
    else {
      cnt++;
      if (cnt > m || arr[i] > mid) {
        return false;
      }
      sum = arr[i];
    }
  }
  return true;
}

int findPages(int arr[], int n, int m) {
  // Write your code here.
  int total = accumulate(arr, arr+n, 0);
  int s = 0, e = total, ans = -1;
  if (n >= m) {
    while (s <= e) {
      int mid = s + (e - s) / 2;
      if (isPossible(arr, n, m, mid)) {
        ans = mid;
        e = mid - 1;
      }
      else {
        s = mid + 1;
      }
    }
  }
  return ans;
}


int main()
{
  int n, m;
  cin >> n >> m;
  int arr[n+5];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  cout << findPages(arr, n, m) << endl;


  return 0;
}
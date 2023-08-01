/* 
  Binary Search related problem
  problem link: https://www.spoj.com/problems/EKO/
  Author: Sanjoy Paul
  Date: 24/7/2023

 */

#include <iostream>
using namespace std;

bool isPossible(int arr[], int n, int m, int mid)
{
  long long int sum = 0;
  for (int i = 0; i < n; i++) {
    if (arr[i] >= mid) {
      sum += abs(arr[i] - mid);
    }
  }

  return sum < m ? false : true;
}

int findHeight(int arr[], int n, int m)
{
  int maxi = arr[0];
  for (int i = 1; i < n; i++) {
    maxi = max(maxi, arr[i]);
  }
  int s = 0, e = maxi, ans = -1;
  while (s <= e) {
    int mid = s + (e - s) / 2;
    if (isPossible(arr, n, m, mid)) {
      ans = mid;
      s = mid + 1;
    }
    else {
      e = mid - 1;
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

  cout << findHeight(arr, n, m) << endl;

  return 0;
}
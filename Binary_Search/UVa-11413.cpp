/* 
  Title - 11413 - Fill the Containers
  Link - https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=26&page=show_problem&problem=2408
  Author - Sanjoy Paul
  Approach - Binary search

 */

#include <iostream>
#include <numeric>
using namespace std;

bool isPossible(int *arr, int n, int m, int mid)
{
  int sum = 0, cnt = 1;
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

int bSearch(int *arr, int n, int m)
{
  int total = accumulate(arr, arr+n, 0);
  int st = 1, end = total, ans = -1;

  while (st <= end) {
    int mid = st + (end - st) / 2;
    if (isPossible(arr, n, m, mid)) {
      ans = mid;
      end = mid - 1;
    }
    else {
      st = mid + 1;
    }
  }

  return ans;
}

int main()
{
  // freopen("input.txt", "r", stdin);
  // freopen("output.txt", "w", stdout);

  int n, m;
  while (scanf("%d %d", &n, &m) != EOF) {
    
    int arr[n+5];

    for (int i = 0; i < n; i++) {
      scanf("%d", &arr[i]);
    }

    printf("%d\n", bSearch(arr, n, m));
  }

  return 0;
}
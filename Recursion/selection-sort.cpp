#include <iostream>
using namespace std;

void selection_sort(int *arr, int n, int cnt)
{
  // base case
  // empty array or 1 size array
  // already sorted
  if (n == 0 || n == 1 || cnt > n) return;

  // find the min in the array and swap
  int idx = cnt;
  for (int i = cnt; i < n; i++) {
    if (arr[idx] > arr[i]) {
      idx = i;
    }
  }
  if (arr[cnt] > arr[idx]) {
    swap(arr[cnt], arr[idx]);
  }

  // recursive call
  selection_sort(arr, n, cnt+1);
}

int main()
{
  int n;
  cin >> n;

  int *arr = new int[n];

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  selection_sort(arr, n, 0);

  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}
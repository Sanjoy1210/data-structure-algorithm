#include <iostream>
using namespace std;

int getPivot(int arr[], int n)
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

int main()
{
  int arr[] = {3, 8, 1, 10, 17};
  int n = sizeof(arr) / sizeof(int);

  int idx = getPivot(arr, n);

  cout << idx << endl;

  return 0;
}
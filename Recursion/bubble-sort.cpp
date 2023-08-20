#include <iostream>
#include <vector>
using namespace std;

void bubble_sort(vector<int> &arr, int n)
{
  // base case
  // empty array or 1 size array
  // already sorted
  if (n == 0 || n == 1) return;

  // solve a case
  for (int i = 0; i < n - 1; i++) {
    if (arr[i] > arr[i+1]) {
      swap(arr[i], arr[i+1]);
    }
  }
  
  // recursive call
  bubble_sort(arr, n-1);
}

int main()
{
  vector<int> arr = {2, 5, 1, 6, 9};

  bubble_sort(arr, arr.size());

  for (int i = 0; i < arr.size(); i++) {
    cout << arr[i] << " ";
  }

  return 0;
}
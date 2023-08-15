/* 
  Title - Find the target in an array. if found return true, otherwise return false. (using recursion)
  input - 5 6
          1 2 3 4 5
  output - false

  Author - Sanjoy Paul

 */

bool binarySearch(int *arr, int s, int e, int key)
{
  // base case
  if (s > e) {
    return false;
  }

  int mid = s + (e - s) / 2;
  if (arr[mid] == key) {
    return true;
  }

  if (arr[mid] > key) {
    return binarySearch(arr, 0, mid - 1, key);
  }
  
  return binarySearch(arr, mid + 1, e, key);
}

#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;

  int *arr = new int[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  int key;
  cin >> key;

  if (binarySearch(arr, 0, n-1, key)) {
    cout << "Found\n";
  }
  else {
    cout << "Not found\n";
  }

  return 0;
}
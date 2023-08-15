/* 
  Title - Write a code that return true if the array is sorted, otherwise return false. (using recursion)
  input - 5
          1 2 3 4 5
  output - false

  Author - Sanjoy Paul

 */

#include <iostream>
using namespace std;

bool isSorted(int arr[], int n)
{
  // base case
  if (n == 0 || n == 1) { // empty or single element array
    return true;
  }
  
  if (arr[0] > arr[1]) { // 1st element is greater then 2nd element
    return false;
  }

  bool ans = isSorted(arr + 1, n - 1); // check the remaining part
  return ans;
}

int main()
{
  int n;
  cin >> n;

  int *arr = new int[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  if (isSorted(arr, n)) {
    cout << "Array is sorted\n";
  }
  else {
    cout << "Array is not sorted\n";
  }

  return 0;
}
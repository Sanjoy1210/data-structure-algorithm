/* 
  Title - Find the target in an array. if found return true, otherwise return false. (using recursion)
  input - 5 6
          1 2 3 4 5
  output - false

  Author - Sanjoy Paul

 */

#include <iostream>
using namespace std;

bool linearSearch(int *arr, int n, int target)
{
  // base case
  if (n == 0) {
    return false;
  }

  if (arr[0] == target) {
    return true;
  }

  return linearSearch(arr + 1, n - 1, target);
}

int main()
{
  int n, target;
  cin >> n >> target;

  int *arr = new int[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  if (linearSearch(arr, n, target)) {
    cout << "Found\n";
  }
  else {
    cout << "Not found\n";
  }

  return 0;
}
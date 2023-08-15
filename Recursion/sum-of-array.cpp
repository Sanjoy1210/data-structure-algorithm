/* 
  Title - Calculate the sum of all element in an array. (using recursion)
  input - 5
          1 2 3 4 5
  output - 15

  Author - Sanjoy Paul

 */

#include <iostream>
using namespace std;

int doSum(int arr[], int n)
{
  // base case
  if (n == 0) {
    return 0;
  }

  int sum = doSum(arr + 1, n - 1) + arr[0];
  return sum;
}

int main()
{
  int n;
  cin >> n;
  
  int *arr = new int[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  cout << doSum(arr, n) << endl;

  return 0;
}
/* 
  Title - Learn Recursion
  Author - Sanjoy Paul

  Definition - Any function which calls itself directly or indirectly is call recursion.
  Why use recursion - When a bigger problem's result depends on smaller problem's result, means to solve a bigger problem we need to solve the smaller problem first. then use recursion. 
  Example: calculate factorial of a number, let's say 5 factorial.
  5! = 5 * 4 * 3 * 2 * 1
  here we see, 4 * 3 * 2 * 1 is 4!
  also, 3 * 2 * 1 is 3!
  and similarly 2! and 1!
  5! = 5 * 4!
  5! = 5 * 4 * 3!
  5! = 5 * 4 * 3 * 2!
  5! = 5 * 4 * 3 * 2 * 1!
  here, calculate 5! we need to calculate the 4! first and 3! then 2! ......

  three steps of recursion
  1. base case - recursive function must have terminating condition, which the process stop calling itself, know as base case. without this base case, the process will keep calling itself like infinite loop and after that program throws an error segmentation fault which is basically stack overflow.

  2. recursive call - to define the smaller subproblem, need to break the problem down into smaller subproblem and call the function itself(recursively) to solve each problem.

  3. self work/combine the solution - this is actually the calculation step in each recursive call. this step may come before the 2 step or after the 2 step that depends on problem behavior.

  ====================================================== Problem solving =================================================
  Write a program to check an array is sorted or not.
  arr = [1, 2, 3, 4, 5] ---> true
  arr = [1, 2, 5, 4, 3] ---> false

 */

#include <iostream>
using namespace std;

bool isSortedArr(int *arr, int n, int idx)
{
  // base case
  if (idx == n - 1) return true;

  // recursive call
  bool result = isSortedArr(arr, n, idx + 1);

  // self work
  bool ans = result && arr[idx] <= arr[idx+1];

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

  bool ok = isSortedArr(arr, n, 0);

  cout << (ok ? "true" : "false") << endl;

  return 0;
}
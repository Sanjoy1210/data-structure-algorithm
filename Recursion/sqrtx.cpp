/* 
  Title - 69. Sqrt(x)
  Link - https://leetcode.com/problems/sqrtx/
  Author - Sanjoy Paul
  Approach - Binary Search & Recursion

 */

#include <iostream>
using namespace std;

int mySqrt(int x, int s, int e)
{
  if (x == 0) return 0;
  if (x == 1) return 1;
  if (s > e) return e;

  int mid = s + (e - s) / 2;

  if (mid > x / mid) {
    e = mid - 1;
  }
  else {
    s = mid + 1;
  }
  return mySqrt(x, s, e);
}

int main()
{
  int n = 4;

  cout << mySqrt(n, 0, n) << endl;

  return 0;
}
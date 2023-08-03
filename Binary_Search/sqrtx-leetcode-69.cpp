/* 
  Title - 69. Sqrt(x)
  Link - https://leetcode.com/problems/sqrtx/
  Author - Sanjoy Paul
  Approach - Binary Search

 */


#include <iostream>
using namespace std;

 int mySqrt(int x) {
  if (x < 1) return 0;
  int st = 2, end = x;
  while (st <= end) {
    int mid = st + (end - st) / 2;

    if (mid <= x / mid) {
      st = mid + 1;
    }
    else {
      end = mid - 1;
    }
  }
  return st-1;
}

int main()
{
  int n = 8;

  cout << mySqrt(n) << endl;

  return 0;
}
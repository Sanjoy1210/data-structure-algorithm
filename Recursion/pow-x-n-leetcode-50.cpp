/* 
  Title - 50. Pow(x, n)
  Link - https://leetcode.com/problems/powx-n/description/
  Author - Sanjoy Paul
  Approach - Math, Recursion

 */

#include <iostream>
#include <math.h>
using namespace std;

double myPow(double x, int n) {
  if (n == 0) return 1.0;
  if (n == 1) return x;

  double ans = myPow(x, abs(n)/2);
  
  if (n & 1) {
    ans = x * ans * ans;
  }
  else {
    ans = ans * ans;
  }
  if (n < 0) {
    return 1.0 / ans;
  }
  return ans;
}

int main()
{
  double x = 2.00000, n = 10;

  cout << myPow(x, n) << endl;

  return 0;
}
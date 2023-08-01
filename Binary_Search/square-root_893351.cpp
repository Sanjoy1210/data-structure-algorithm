/* 
  Title - Square root
  Link - https://www.codingninjas.com/studio/problems/square-root_893351
  Author - Sanjoy Paul

 */

#include <iostream>
#include <math.h>
using namespace std;

int intSqrt(int n)
{
  // Write your code here.
  int st = 0, end = n, ans = -1;
  while (st <= end) {
    int mid = st + (end - st) / 2;
    int div = n / mid;
    if (mid == div) {
      return mid;
    }
    else if (mid > div) {
      end = mid - 1;
    }
    else {
      ans = mid;
      st = mid + 1;
    }
  }
  return ans;
}

double precisionSqrt(int n)
{
  double st = 0, end = n;
  int i = 0;
  while (i <= 50) {
    double mid = st + (end - st) / 2.0;
    if (mid <= n / mid) {
      st = mid;
    }
    else {
      end = mid;
    }
    i++;
  }
  return st;
}

int main()
{
  int n;
  cin >> n;

  int ans = intSqrt(n);
  double res = precisionSqrt(n);

  cout << "Integer Sqrt = " << ans << endl;
  cout << "Precision Sqrt = " << res << endl;

  return 0;
}
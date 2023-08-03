/* 
  Title - 231. Power of two
  Link - https://leetcode.com/problems/power-of-two/
  Author - Sanjoy Paul
  Approach - Bit manipulation

 */

#include <iostream>
#include <vector>
using namespace std;

bool isPowerOfTwo(int n) {
  if (n <= 0) return false;
  return !(n & (n - 1));
}

int main()
{
  int n = 16;

  cout << isPowerOfTwo(n) << endl;

  return 0;
}
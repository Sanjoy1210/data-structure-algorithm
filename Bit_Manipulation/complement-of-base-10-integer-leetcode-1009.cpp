/* 
  Title - 1009. Complement of base 10 integer
  Link - https://leetcode.com/problems/complement-of-base-10-integer/
  Author - Sanjoy Paul
  Approach - Bit mask

 */

#include <iostream>
#include <vector>
using namespace std;

int bitwiseComplement(int n) {
  int temp = n, bitmask = 0;
  while (temp) {
    temp >>= 1;
    bitmask = (bitmask << 1) | 1;
  }
  return n == 0 ? 1 : (n ^ bitmask);
}

int main()
{
  int n = 5;

  cout << bitwiseComplement(n) << endl;

  return 0;
}

/* 

    8 =     0000....1000
    mask =  0000....1111
    bitmask = 0
    8, bitmask = 0000....0001
    4, bitmask = 0000....0011
    2, bitmask = 0000....0111
    1, bitmask = 0000....1111
    0, loop terminate
    
 */
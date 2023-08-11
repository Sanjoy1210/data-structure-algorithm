/* 
  Title - 1903. Largest Odd Number in String
  Link - https://leetcode.com/problems/largest-odd-number-in-string/description/
  Author - Sanjoy Paul
  Approach - Greedy, Math

 */

#include <iostream>
using namespace std;

string largestOddNumber(string num) {
  int n = num.size();
  if ((num[n-1] - 48) & 1) return num;

  for (int i = n - 1; i > 0; i--) {
    if ((num[i-1] - 48) & 1) {
      return num.substr(0, i);
    }
  }
  return "";
}


int main()
{
  string num = "35427";

  cout << largestOddNumber(num) << endl;

  return 0;
}
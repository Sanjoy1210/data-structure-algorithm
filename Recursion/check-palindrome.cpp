#include <iostream>
using namespace std;

bool isPalindrome(string str, int s)
{
  int n = str.size() - s - 1;
  if (s > n) return true;

  if (str[s] != str[n]) return false;

  return isPalindrome(str, s + 1);
}

int main()
{
  string str = "abbbaa";

  if (isPalindrome(str, 0)) {
    cout << "Palindrome string\n";
  }
  else {
    cout << "Not Palindrome string\n";
  }

  return 0;
}
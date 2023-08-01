/* 
  Title - Check if the string is a palindrome
  Links - https://www.codingninjas.com/studio/problems/check-if-the-string-is-a-palindrome_1062633
          https://leetcode.com/problems/valid-palindrome/

  Author - Sanjoy Paul
  Approach - Two pointer

 */


#include <bits/stdc++.h>
using namespace std;

char toLowercase(char ch)
{
  if (ch >= 'A' && ch <= 'Z') {
    return ch - 'A' + 'a';
  }
  return ch;
}

bool validChar(char ch)
{
  return ((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'));
}

bool checkPalindrome(string s)
{
  // Write your code here.
  int st = 0, e = s.size() - 1;
  while (st <= e) {
    char temp1 = toLowercase(s[st]);
    char temp2 = toLowercase(s[e]);
    if (!validChar(temp1)) {
      st++;
    }
    else if (!validChar(temp2)) {
      e--;
    }
    else if (validChar(temp1) && validChar(temp2) && temp1 != temp2) {
      return false;
    }
    else {
      st++;
      e--;
    }
  }
  return true;
}

int main()
{
  int t;
  cin >> t;

  while (t--) {
    string s;
    getline(cin, s);
    bool isPalindrome = checkPalindrome(s);
    if (isPalindrome) {
      cout << "yes\n";
    } else {
      cout << "no\n";
    }
  }

  return 0;
}
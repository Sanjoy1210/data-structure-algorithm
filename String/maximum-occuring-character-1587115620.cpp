/* 
  Title - Maximum occurring character
  Links - https://practice.geeksforgeeks.org/problems/maximum-occuring-character-1587115620/1
  Author - Sanjoy Paul
  Approach - Brute force

 */

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

char maxOccurChar(string s)
{
  sort(s.begin(), s.end());

  int cnt = 1, ans = -999;
  char ch = s[0];
  for (int i = 1; i < s.size(); i++) {
    if (s[i] == s[i-1]) {
      cnt++;
    }
    else {
      if (ans < cnt) {
        ans = cnt;
        ch = s[i-1];
      }
      cnt = 1;
    }
  }

  if (cnt > 1 && ans < cnt) {
    ch = s.back();
  }

  return ch;
}

char getMaxOccurringChar(string s)
{
  int hash[30] = {0};
  for (int i = 0; i < s.size(); i++) {
    hash[s[i] - 'a']++;
  }
  int a = -999;
  char ch = s[0];
  for (int i = 0; i < 26; i++) {
    if (a < hash[i]) {
      a = hash[i];
      ch = i + 'a';
    }
  }
  return ch;
}

int main()
{
  string s = "testsample";
  
  // char ch = maxOccurChar(s); // O(nlogn) with O(1) extra space
  char ch = getMaxOccurringChar(s); // O(n) with O(1) extra space

  cout << ch << endl;

  return 0;
}
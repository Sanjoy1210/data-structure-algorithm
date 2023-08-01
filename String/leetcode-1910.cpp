/* 
  Title - 1910. Remove All Occurrences of a Substring
  Link - https://leetcode.com/problems/remove-all-occurrences-of-a-substring/
  Author - Sanjoy Paul

 */

#include <iostream>
#include <string>
using namespace std;

int findPart(string s, string part)
{
  for (int i = 0; i < s.size(); i++) {
    int cnt = 0;
    for (int j = i, p = 0; p < part.size(); p++) {
      if (part[p] == s[j]) {
        cnt++;
        j++;
      } 
      if (cnt == part.size()) {
        return i;
      }
    }
  }
  return s.size();
}

string erasePart(string s, int st, int end)
{
  int i = st, j = end;
  while (j < s.length()) {
    s[i++] = s[j++];
  }
  for (int i = 0; i < end - st; i++) {
    s.pop_back();
  }
  
  return s;
}

string removeOccurrences(string s, string part) {
  int len = s.size(), found = findPart(s, part);
  
  while (s.length() != 0 && found < s.length()) {
    s = erasePart(s, found, found + part.length());
    found = findPart(s, part);
  }
  return s;
}

int main()
{
  string s = "axxxxyyyyb", part = "xy";

  cout << removeOccurrences(s, part) << endl;

  return 0;
}
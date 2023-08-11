/* 
  Title - 151. Reverse Words in a String
  Link - https://leetcode.com/problems/reverse-words-in-a-string/
  Author - Sanjoy Paul

 */

#include <iostream>
#include <algorithm>
using namespace std;

string reverseWords(string s) {
  int len = s.size(), j = 0, i = 0;

  while (i < len) {
    if (s[i] == ' ') {
      reverse(s.begin() + j, s.begin() + i);
      j = i;
    }
    while (s[i] == ' ') {
      i++;
      j = i;
    }
    i++;
  }
  if (j != len) {
    reverse(s.begin() + j, s.end());
  }
  reverse(s.begin(), s.end());

  // erase leading or trailing spaces
  // i = -1;
  // while (s[++i] == ' ');
  // s.erase(s.begin(), s.begin() + i);
  // i = 0, j = s.size();
  // while (s[--j] == ' ') {
  //   i++;
  // }
  // s.erase(j+1);

  // using substr to remove leading or trailing spaces
  // i = -1, j = len;
  // while (s[++i] == ' ');
  // while (s[--j] == ' ');
  // s = s.substr(i, j-i+1);

  i = j = 0;
  bool space = true;
  while (j < s.size()) {
    if (s[j] != ' ') {
      s[i++] = s[j++];
      space = false;
    }
    else {
      if (!space) {
        s[i++] = ' ';
        space = true;
      }
      else {
        j++;
      }
    }
  }

  if (s[i-1] != ' ') {
    s.erase(s.begin() + i, s.end());
  }
  else {
    s.erase(s.begin() + i - 1, s.end());
  }

  return s;
}

int main()
{
  string str = "    hello        world   ";

  cout << "[" << reverseWords(str) << "]" << endl;

  return 0;
}
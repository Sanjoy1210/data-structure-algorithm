/* 
  Title - Reverse words
  Links - https://www.codingninjas.com/studio/problems/reverse-words_7037425
          https://leetcode.com/problems/reverse-words-in-a-string/
  Author - Sanjoy Paul
  Approach - Two pointer

 */

#include <iostream>
#include <string>
using namespace std;

void reverse(string &str, int s, int e)
{
  int st = s, end = e;
  while (st <= end) {
    swap(str[st++], str[end--]);
  }
}

void removeSpaces(string &str)
{
  int n = str.length(), i = 0, j = -1;
  bool spaceFound = false;

  // handle the leading spaces
  while (++j < n && str[j] == ' ');

  while (j < n)
  {
    if (str[j] != ' ') {
      str[i++] = str[j++];
      spaceFound = false;
    }
    else if (str[j++] == ' ' && !spaceFound) {
      str[i++] = ' ';
      spaceFound = true;
    }
  }

  // remove trailing spaces
  if (i <= 1) {
    str.erase(str.begin() + i, str.end()-1);
  }
  else {
    str.erase(str.begin() + i - 1, str.end()-1);
  }
}

string revWords(string str) {
  int j = 0, cnt = 0;
  for (int i = 0; i < str.size(); i++) {
    if (str[i] == ' ') {
      reverse(str, j, i-1);
      j = i;
    }
    while(str[i] == ' ') {
      i++;
      j = i;
    }
  }
  if (j != str.size()) {
    reverse(str, j, str.size()-1);
  }
  
  reverse(str, 0, str.size() - 1);

  removeSpaces(str);

  return str;
}

int main()
{
  string s = "Welcome   to Coding Ninjas";

  s = revWords(s);

  cout << s << endl;

  return 0;
}
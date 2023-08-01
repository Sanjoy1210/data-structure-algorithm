/* 
  Title - 443. String compression
  Link - https://leetcode.com/problems/string-compression/
  Author - Sanjoy Paul

 */

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int compress(vector<char>& chars) {
  int idx = 0, n = chars.size(), i = 0;
  while (i < n) {
    int j = i + 1;
    while (j < n && chars[i] == chars[j]) {
      j++;
    }

    chars[idx++] = chars[i];
    if (j - i > 1) {
      string cnt = to_string(j - i);
      for (char c : cnt) {
        chars[idx++] = c;
      }
    }
    i = j;
  }
  return idx;
}

int main()
{
  vector<char> chars = {'a', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b'};

  cout << compress(chars) << endl;

  return 0;
}
#include <iostream>
using namespace std;

void reverseOptimal(string &str, int i)
{
  int n = str.size() - i - 1;

  // base case
  if (i > n) return;

  swap(str[i], str[n]);
  reverseOptimal(str, i+1);
}

void reverse(string &str, int i, int j)
{
  // base case
  if (i > j) return;

  swap(str[i], str[j]);
  reverse(str, i+1, j-1);
}

int main()
{
  string str = "abcde";
  reverseOptimal(str, 0);
  cout << str << endl;

  return 0;
}
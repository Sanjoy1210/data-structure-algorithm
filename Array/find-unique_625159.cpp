/* 
  Title - Find unique
  Link - https://www.codingninjas.com/studio/problems/find-unique_625159
  Author - Sanjoy Paul

 */

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
  int arr[] = {1, 3, 1, 3, 6, 6, 7, 10, 7};
  int len = sizeof(arr) / sizeof(int);

  int res = 0;
  for (int i = 0; i < len; i++) {
    res = res ^ arr[i];
  }

  cout << res << endl;

  return 0;
}
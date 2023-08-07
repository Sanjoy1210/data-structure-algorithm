/* 
  Title - A. Array Coloring
  Link - https://codeforces.com/problemset/problem/1857/A
  Author - Sanjoy Paul

 */

#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--) {
    int n, sum = 0;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
      int x;
      cin >> x;
      sum += x;
    }
    
    if (sum & 1) {
      cout << "NO\n";
    }
    else {
      cout << "YES\n";
    }
  }
  
  return 0;
}
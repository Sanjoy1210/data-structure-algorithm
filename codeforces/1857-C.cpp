/* 
  Title - C. Assembly via Minimums
  Link - https://codeforces.com/problemset/problem/1857/C
  Author - Sanjoy Paul

 */

#include <algorithm>
#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

void sol(vector<int> &nums, int n)
{
  sort(nums.begin(), nums.end());
  int i = 0, l = n * (n-1) / 2;
  n--;
  while (n) {
    cout << nums[i] << " ";
    i += n;
    n--;
  }
  cout << nums[l - 1] << endl;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> nums;
    for (int i = 0; i < n * (n - 1) / 2; i++) {
      int x;
      cin >> x;
      nums.push_back(x);
    }
    sol(nums, n);
  }

  return 0;
}
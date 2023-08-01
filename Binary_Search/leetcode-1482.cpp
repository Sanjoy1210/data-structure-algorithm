/* 
  Title - 1482. Minimum Number of Days to Make m Bouquets
  Link - https://leetcode.com/problems/minimum-number-of-days-to-make-m-bouquets/
  Author - Sanjoy Paul
  Approach - Binary Search

 */

#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>
using namespace std;

bool isPossible(vector<int>& bloomDay, int m, int k, int mid) {
  int cnt = 0, adj = 0;
  for (int i : bloomDay) {
    if (i <= mid) {
      adj++;
    }
    else {
      cnt += adj / k;
      adj = 0;
    }
  }
  if (adj) {
    cnt += adj / k;
  }
  
  return cnt >= m;
}

int minDays(vector<int>& bloomDay, int m, int k) {
  int maxi = bloomDay.front();
  for (int i : bloomDay) {
    maxi = max(maxi, i);
  }
  int st = 1, end = maxi, ans = -1;
  while (st <= end) {
    int mid = st + (end - st) / 2;

    if (isPossible(bloomDay, m, k, mid)) {
      ans = mid;
      end = mid - 1;
    }
    else {
      st = mid + 1;
    }
  }

  return ans;
}

int main()
{
  vector<int> bloomDay = {1,10,3,10,2};
  int m = 3, k = 1;

  cout << minDays(bloomDay, m, k) << endl;


  return 0;
}
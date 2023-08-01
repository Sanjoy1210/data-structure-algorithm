/* 
  Title - 875. Koko Eating Bananas
  Link - https://leetcode.com/problems/koko-eating-bananas/
  Author - Sanjoy Paul
  Approach - Binary Search

 */

#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>
using namespace std;

bool isPossible(vector<int>& piles, int h, int mid) {
  long long int cnt = 0;
  for (int i : piles) {
    if (i % mid) {
      cnt += i / mid + 1;
    }
    else {
      cnt += i / mid;
    }
  }
  return cnt <= h;
}

int minEatingSpeed(vector<int>& piles, int h) {
  sort(piles.begin(), piles.end());
  int st = 1, end = piles.back(), ans = -1;

  while (st <= end) {
    int mid = st + (end - st) / 2;
    if (isPossible(piles, h, mid)) {
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
  vector<int> piles = {3,6,7,11};
  int h = 8;

  cout << minEatingSpeed(piles, h) << endl;


  return 0;
}
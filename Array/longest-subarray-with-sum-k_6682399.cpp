/* 
  Title - Longest Subarray With Sum K
  Link - https://www.codingninjas.com/studio/problems/longest-subarray-with-sum-k_6682399
  Author - Sanjoy Paul

 */

#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int longestSubarrayWithSumK(vector<int> a, long long k) {
  long long sum = 0;
  int i = 0, s = 0, maxi = 0;
  
  while (i < a.size()) {
    sum += a[i];
    if (sum == k) {
      maxi = max(maxi, i - s + 1);
    }
    while (sum > k) {
      sum -= a[s];
      s++;
      if (sum == k) {
        maxi = max(maxi, i - s + 1);
      }
    }
    i++;
  }

  return maxi;
}

int main()
{
  int n = 7;
  vector<int> a = {1, 2, 3, 1, 1, 1, 1};
  long long k = 30;

  cout << longestSubarrayWithSumK(a, k) << endl;

  return 0;
}
/* 
  Title - Row with max 1s
  Link - https://www.codingninjas.com/studio/problems/row-of-a-matrix-with-maximum-ones_982768
  Author - Sanjoy Paul
  Approach - Binary search
  Time Complexity - O(n * log(m))
  Space complexity - O(1)

 */


#include <iostream>
#include <vector>
using namespace std;

int rowWithMax1s(vector<vector<int>> &matrix, int n, int m)
{
  //    Write your code here.
  if (matrix[0][0] == 1) return 0;
  int i = 0, maxi = 0, ans = -1;
  while (i < n) {
    int s = 0, e = m - 1, p = 0;
    bool found = false;
    while (s <= e) {
      int mid = s + (e - s) / 2;
      if (matrix[i][mid] == 1) {
        e = mid - 1;
        p = mid;
        found = true;
      }
      else {
        s = mid + 1;
      }
    }
    if (m - p > maxi && found) {
      maxi = m - p;
      ans = i;
    }
    i++;
  }
  return ans;
}

int main()
{
  int n = 4, m = 5;
  vector<vector<int>> matrix = {
    {0, 0, 1, 1, 1 },
    {0, 0, 0, 1, 1 },
    {1, 1, 1, 1, 1}, 
    {0, 0, 0, 0, 0 }
  };

  cout << rowWithMax1s(matrix, n, m) << endl;

  return 0;
}

/* 
  Title - 240. Search a 2D Matrix II
  Link - https://leetcode.com/problems/search-a-2d-matrix-ii/
  Author - Sanjoy Paul
  Approach - Binary search

 */

#include <iostream>
#include <vector>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
  int row = matrix.size();
  int col = matrix[0].size();
  int s = 0, e = col - 1;
  while (s < row && e >= 0) {
    int ele = matrix[s][e];
    if (ele == target) {
      return true;
    }
    else if (ele > target) {
      e--;
    }
    else {
      s++;
    }
  }
  return false;
}

int main()
{
  vector<vector<int>> matrix = {
    {1,4,7,11,15},
    {2,5,8,12,19},
    {3,6,9,16,22},
    {10,13,14,17,24},
    {18,21,23,26,30}
  };
  int target = 5;

  cout << searchMatrix(matrix, target) << endl;

  return 0;
}
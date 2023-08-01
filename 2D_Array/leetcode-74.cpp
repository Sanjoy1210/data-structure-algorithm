/* 
  Title - 74. Search a 2D matrix
  Link - https://leetcode.com/problems/search-a-2d-matrix/
  Author - Sanjoy Paul
  Approach - Binary search

 */

#include <iostream>
#include <vector>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
  int row = matrix.size();
  int col = matrix[0].size();
  int s = 0, e = row * col - 1;

  while (s <= e) {
    int mid = s + (e - s) / 2;
    int ele = matrix[mid / col][mid % col];
    if (ele == target) {
      return true;
    }
    else if (ele > target) {
      e = mid - 1;
    }
    else {
      s = mid + 1;
    }
  }
  
  return false;
}

int main()
{
  vector<vector<int>> matrix = {{1,3,5,7}, {10,11,16,20}, {23,30,34,60}};
  int target = 3;

  cout << searchMatrix(matrix, target) << endl;

  return 0;
}
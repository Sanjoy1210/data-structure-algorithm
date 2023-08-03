/* 
  Title - 54. Spiral matrix
  Link - https://leetcode.com/problems/spiral-matrix/
  Author - Sanjoy Paul
  Approach - Brute force

 */

#include <iostream>
#include <vector>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix) {
  int row = matrix.size();
  int col = matrix[0].size();
  int sRow = 0, sCol = 0;
  int eRow = row-1, eCol = col-1;
  vector<int> ans;
  int round = row * col;
  int cnt = 0;
  while (cnt < round) {
    // 1st row
    for (int i = sCol; i <= eCol && cnt < round; i++) {
      ans.push_back(matrix[sRow][i]);
      cnt++;
    }
    sRow++; // 2

    // last col
    for (int i = sRow; i <= eRow && cnt < round; i++) {
      ans.push_back(matrix[i][eCol]);
      cnt++;
    }
    eCol--; // 1
    
    // last row
    for (int i = eCol; i >= sCol && cnt < round; i--) {
      ans.push_back(matrix[eRow][i]);
      cnt++;
    }
    eRow--; // 1

    // 1st col
    for (int i = eRow; i >= sRow && cnt < round; i--) {
      ans.push_back(matrix[i][sCol]);
      cnt++;
    }
    sCol++; // 1
  }

  return ans;
}

int main()
{
  vector<vector<int>> matrix = matrix = {
    {1,2,3,4},
    {5,6,7,8},
    {9,10,11,12}
  };

  cout << spiralOrder(matrix) << endl;

  return 0;
}
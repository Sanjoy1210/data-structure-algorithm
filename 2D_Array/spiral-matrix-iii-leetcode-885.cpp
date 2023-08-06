/* 
  Title - 885. Spiral matrix III
  Link - https://leetcode.com/problems/spiral-matrix-iii/description/
  Author - Sanjoy Paul
  Approach - Matrix simulation

 */

#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> spiralMatrixPrint(int rows, int cols, int rStart, int cStart) {
  vector<vector<int>> ans(rows, vector<int>(cols));
  int dx[] = {0, 1, 0, -1};
  int dy[] = {1, 0, -1, 0};
  int cnt = 1;
  
  for (int k = 1; k <= 2 * (rows + cols); k += 2) {
    for (int i = 0; i < 4; i++) {
      int dk = k + (i / 2);
      for (int j = 0; j < dk; j++) {
        if (rStart >= 0 && rStart < rows && cStart >= 0 && cStart < cols) {
          ans[rStart][cStart] = cnt;
          if (cnt == rows * cols) {
            return ans;
          }
          cnt++;
        }
        rStart += dx[i];
        cStart += dy[i];
      }
    }
  }
  return ans;
}

vector<vector<int>> spiralMatrixIII(int rows, int cols, int rStart, int cStart) {
  vector<vector<int>> ans(rows * cols, vector<int>(2));
  int dx[] = {0, 1, 0, -1};
  int dy[] = {1, 0, -1, 0};
  int idx = 0;
  
  for (int k = 1; k <= 2 * (rows + cols); k += 2) {
    for (int i = 0; i < 4; i++) {
      int dk = k + (i / 2);
      for (int j = 0; j < dk; j++) {
        if (rStart >= 0 && rStart < rows && cStart >= 0 && cStart < cols) {
          // ans[idx][0] = rStart;
          // ans[idx][1] = cStart;
          // idx++;
          ans[idx++] = {rStart, cStart};
          if (idx == rows * cols) {
            return ans;
          }
        }
        rStart += dx[i];
        cStart += dy[i];
      }
    }
  }
  return ans;
}

int main()
{
  int rows = 1, cols = 4, rStart = 0, cStart = 0;
  cin >> rows >> cols >> rStart >> cStart;

  vector<vector<int>> ans = spiralMatrixIII(rows, cols, rStart, cStart);

  // print spiral matrix
  // for (int i = 0; i < rows; i++) {
  //   for (int j = 0; j < cols; j++) {
  //     cout << ans[i][j] << "\t";
  //   }
  //   cout <<endl;
  // }

  for (int i = 0; i < rows * cols; i++) {
    cout << ans[i][0] << " " << ans[i][1] << endl;
  }

  return 0;
}
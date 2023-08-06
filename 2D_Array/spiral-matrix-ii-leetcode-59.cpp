/* 
  Title - 59. Spiral matrix II
  Link - https://leetcode.com/problems/spiral-matrix-ii/description/
  Author - Sanjoy Paul
  Approach - Matrix simulation

 */

#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> generateMatrix(int n) {
  vector<vector<int>> ans(n);
  for (int i = 0; i < n; i++) {
    ans[i] = vector<int>(n);
  }
  int row = n, col = n;
  int sRow = 0, sCol = 0, eRow = n-1, eCol = n-1, cnt = 1;

  while (cnt <= n * n) {
    // 1st row
    for (int j = sRow; j <= eCol; j++) {
      ans[sRow][j] = cnt++;
    }
    sRow++;

    // last col
    for (int j = sRow; j <= eRow; j++) {
      ans[j][eCol] = cnt++;
    }
    eCol--;

    // last row
    for (int j = eCol; j >= sCol; j--) {
      ans[eRow][j] = cnt++;
    }
    eRow--;

    // 1st col
    for (int j = eRow; j >= sRow; j--) {
      ans[j][sCol] = cnt++;
    }
    sCol++;
  }

  return ans;
}

int floorMod(int a, int b)
{
  return ((a % b) + b) % b;
}

vector<vector<int>> optimalSol(int n) {
  vector<vector<int>> res(n, vector<int>(n));

  // we need to traverse 4 directions to complete a layer
  int dx[] = {0, 1, 0, -1};
  int dy[] = {1, 0, -1, 0};

  int d = 0, row = 0, col = 0;
  int cnt = 1;

  while (cnt <= n * n) {
    res[row][col] = cnt++;

    // next row and col
    int r = floorMod(row + dx[d], n);
    int c = floorMod(col + dy[d], n);

    // check next row and col is non-zero
    if (res[r][c]) {
      // change the direction
      d = (d + 1) % 4;
    }

    // update row and col
    row += dx[d];
    col += dy[d];
  }

  return res;
}

int main()
{
  int n;
  cin >> n;

  vector<vector<int>> ans = optimalSol(n);

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << ans[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}
#include <iostream>
using namespace std;

bool isPresent(int a[][4], int row, int col, int target)
{
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      if (a[i][j] == target) {
        return true;
      }
    }
  }
  return false;
}

int main()
{
  int a[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
  int target = 22;

  bool isFound = isPresent(a, 3, 4, target);

  return 0;
}
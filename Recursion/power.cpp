#include <iostream>
using namespace std;

int powerOptimal(int a, int b)
{
  // base case
  if (b == 0) {
    return 1;
  }
  if (b == 1) {
    return a;
  }

  // recursive call
  int ans = powerOptimal(a, b/2);

  // if b is odd
  if (b & 1) {
    return a * ans * ans;
  }

  // else b is even
  return ans * ans;
}

int power(int a, int b)
{
  if (b == 0) {
    return 1;
  }

  int ans = power(a, b-1) * a;
  return ans;
}

int main() 
{
  int a = 3, b = 11;

  cout << powerOptimal(a, b) << endl;

  return 0;
}
#include <iostream>
using namespace std;

int main()
{
  int arr[] = {1, 2, 7, 8, 5};
  int len = sizeof(arr) / sizeof(int);

  for (int i = 0; i < len; i+=2) {
    arr[i] ^= arr[i+1];
    arr[i+1] ^= arr[i];
    arr[i] ^= arr[i+1];
  }

  for (int i = 0; i < len; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}
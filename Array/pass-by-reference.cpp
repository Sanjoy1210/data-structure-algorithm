#include <iostream>
using namespace std;

void update(int arr[], int n)
{
  // this arr[] means the starting address of the array pass from main function
  cout << "Inside of the function: ";

  arr[0] = 120;

  // here, arr is the base address, so we don't get the length of the array using sizeof operator

  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl << "Going back to the main function: ";
}
int main()
{
  int arr[3] = {1, 2, 3};

  // 1. arr is the name of array
  // 2. arr is the base address of the array
  // that's why any changes on other function that impact the main array.
  // we just send the starting address of the array to other function, we don't send the array
  update(arr, 3);

  for (int i = 0; i < 3; i++) {
    cout << arr[i] << " ";
  }

  cout << endl;

  return 0;
}
/* 
  Title - Count Frequency in a range
  Link - https://www.codingninjas.com/studio/problems/count-frequency-in-a-range_8365446
  Author - Sanjoy Paul

 */

#include <iostream>
#include <vector>
using namespace std;

#define N 100005

int main()
{
  int n, x;
  cin >> n >> x;

  int arr[N];
  
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  vector<int> hash(n, 0);
  for (int i = 0; i < n; i++) {
    hash[arr[i] - 1]++;
  }

  for (int i : hash) {
    cout << i << " ";
  }
  cout << endl;

  return 0;
}
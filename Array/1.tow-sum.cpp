#include <iostream>
#include <vector>
using namespace std;

#define N 10004
vector<pair<int, int>> hashTable[N];

int hashFunction(int key)
{
  int hashValue = 0;
  while (key) {
    hashValue += key % 10;
    key /= 10;
  }
  return hashValue % 11;
}

void insertItem(int key, int val)
{
  int hashValue = hashFunction(key);
  if (hashValue < 0) {
    hashValue *= -1;
  }
  cout << "hashValue: " << hashValue << endl;
  hashTable[hashValue].push_back({key, val});
}

int searchItem(int key) 
{
  int hashValue = hashFunction(key);
  if (hashValue < 0) {
    hashValue *= -1;
  }
  for (int i = 0; i < hashTable[hashValue].size(); i++) {
    if (hashTable[hashValue][i].first == key) {
      return hashTable[hashValue][i].second;
    }
  }
  return -1;
}

void twoSum(int nums[], int len, int tar)
{
  for (int i = 0; i < len; i++) {
    insertItem(nums[i], i);
  }

  for (int i = 0; i < len; i++) {
    int m = tar - nums[i];
    // cout << "m: " << m << endl;
    int p = searchItem(m);
    if (p > -1 && p != i) {
      cout << i << " " << p << endl;
      break;
    }
  }
}

int main()
{
  int nums[] = {-1,-2,-3,-4,-5}, target = -8;
  int len = sizeof(nums) / sizeof(nums[0]);
  twoSum(nums, len, target);

  return 0;
}
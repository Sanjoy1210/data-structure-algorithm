/* 
  Title - Say Digit

  write a program that say all the digit of a number.
  input ---> n = 412
  output --> four one two

 */

#include <iostream>
#include <vector>
using namespace std;

string str[10] = {
  "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"
};

void sayDigit1(int n)
{
  // base case
  if (n < 10) {
    cout << str[n] << " ";
    return ;
  }

  sayDigit1(n/10);
  sayDigit1(n%10);
}

void sayDigit(int n)
{
  // base case
  if (n == 0) {
    return;
  }

  int digit = n % 10;
  n /= 10;

  sayDigit(n);
  cout << str[digit] << " ";
}

int main()
{
  int n;
  cin >> n;

  sayDigit(n);
  cout << endl;

  return 0;
}
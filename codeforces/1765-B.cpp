#include <iostream>
using namespace std;

int main()
{
  int t;
  cin >> t;
  
  while (t--) {
    int n;
    cin >> n;
    string str;
    cin >> str;
    bool ok = true;

    for (int i = 1; i < n; i += 3) {
      if (str[i] != str[i+1]) {
        ok = false;
        break;
      }
    }

    if (ok) {
      cout << "YES\n";
    }
    else {
      cout << "NO\n";
    }
  }

  return 0;
}
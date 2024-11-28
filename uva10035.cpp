#include <bits/stdc++.h>
using namespace std;
int main()
{
  int a, b;
  while (cin >> a >> b)
  {
    if (a == 0 && a == b)
      break;
    int ans = 0, carry = 0;
    while (a != 0 && b != 0)
    {
      if (a % 10 + b % 10 + carry > 9)
      {
        ans += 1;
        carry = 1;
      }
      else
        carry = 0;
      a /= 10;
      b /= 10;
    }
    if (ans == 0)
      cout << "No carry operation." << endl;
    else if (ans == 1)
      cout << "1 carry operation." << endl;
    else
      cout << ans << " carry operations." << endl;
  }
}
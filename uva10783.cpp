#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t, a, b;
  int ans;
  cin >> t;
  int cas = 1;
  while (t-- && cin >> a >> b)
  {
    ans = 0;
    for (int i = a; i <= b; ++i)
    {
      if (i % 2 == 1)
        ans += i;
    }
    cout << "Case " << cas++ << ": " << ans << endl;
  }
}
#include <bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n, r;
  cin >> n;
  while (n--) {
    cin >> r;
    vector<int> vec(r);
    for (int i = 0; i < r; ++i)
      cin >> vec[i];
    sort(vec.begin(), vec.end());
    int mid = vec[r / 2], ans = 0;
    for (int i = 0; i < r; ++i)
      ans += abs(vec[i] - mid);
    cout << ans << endl;
  }
}
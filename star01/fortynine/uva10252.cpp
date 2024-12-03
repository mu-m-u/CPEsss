#include <bits/stdc++.h>
using namespace std;
int main() {
  string a, b;
  while (getline(cin, a) && getline(cin, b)) {
    for (char c = 'a'; c <= 'z'; c++) {
      int am, bm;
      am = count(a.begin(), a.end(), c);
      bm = count(b.begin(), b.end(), c);
      for (int i = 0; i < min(am, bm); ++i)
        cout << c;
    }
    cout << endl;
  }
}
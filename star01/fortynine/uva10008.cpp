#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;
  int ascii[127] = {0}, len = 0;
  char c;
  while (cin >> c) {
    len++;
    ascii[toupper(c)]++;
  }
  while (len-- && len != 0) {
    for (char i = 'A'; i <= 'Z'; ++i) {
      if (ascii[i] == len)
        cout << i << " " << len << endl;
    }
  }
}
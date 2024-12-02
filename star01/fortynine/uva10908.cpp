#include <bits/stdc++.h>
using namespace std;
int M, N, r, c;

int MaxSqr(vector<vector<char>> &vec) {
  char tar = vec[r][c];
  int Size = 0;
  for (int i = 1;; ++i) {
    if (r - i < 0 || r + i >= M || c - i < 0 || c + i >= N)
      return Size * 2 + 1;
    for (int j = r - i; j <= r + i; ++j) {
      for (int k = c - i; k <= c + i; ++k) {
        if (vec[j][k] != tar)
          return Size * 2 + 1;
      }
    }
    Size++;
  }
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int T;
  cin >> T;
  while (T--) {
    int Q;
    cin >> M >> N >> Q;
    vector<vector<char>> vec(M, vector<char>(N));
    for (int i = 0; i < M; ++i) {
      for (int j = 0; j < N; ++j)
        cin >> vec[i][j];
    }
    cout << M << " " << N << " " << Q << endl;
    for (int i = 0; i < Q; ++i) {
      cin >> r >> c;
      cout << MaxSqr(vec) << endl;
    }
  }
}
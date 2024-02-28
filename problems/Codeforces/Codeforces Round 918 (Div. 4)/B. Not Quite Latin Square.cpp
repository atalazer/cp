// Problem: B. Not Quite Latin Square
// URL: https://codeforces.com/contest/1915/problem/B
// Memory Limit: 256
// Time Limit: 1000

#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int t, x, y;
  cin >> t;

  char S[3][3], ans;
  while (t--) {
    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
        cin >> S[i][j];
        if (S[i][j] == '?') {
          x = i;
          y = j;
        }
      }
    }

    char a, b;
    if (x == 1) {
      a = S[x - 1][y];
      b = S[x + 1][y];
    } else if (x == 0) {
      a = S[x + 1][y];
      b = S[x + 2][y];
    } else {
      a = S[x - 1][y];
      b = S[x - 2][y];
    }

    if (a == 'A' && b == 'B')
      ans = 'C';
    if (b == 'A' && a == 'B')
      ans = 'C';
    if (a == 'A' && b == 'C')
      ans = 'B';
    if (b == 'A' && a == 'C')
      ans = 'B';
    if (a == 'B' && b == 'C')
      ans = 'A';
    if (b == 'B' && a == 'C')
      ans = 'A';

    cout << ans << endl;
  }

  return 0;
}

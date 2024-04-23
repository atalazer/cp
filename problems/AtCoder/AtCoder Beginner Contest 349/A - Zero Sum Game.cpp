// Problem: A - Zero Sum Game
// Contest: AtCoder Beginner Contest 349
// Judge: AtCoder
// URL: https://atcoder.jp/contests/abc349/tasks/abc349_a
// Memory Limit: 1024
// Time Limit: 2000
// Start: Thu 18 Apr 2024 10:37:35 AM WIB

#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
  int N;
  cin >> N;

  int ans = 0, x;
  for (int i = 0; i < N - 1; i++) {
    cin >> x;
    ans -= x;
  }

  cout << ans << '\n';
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  // cin >> t;

  while (t--) {
    solve();
  }
}

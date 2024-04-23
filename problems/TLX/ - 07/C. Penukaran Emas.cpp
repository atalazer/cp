// Problem: C. Penukaran Emas
// Contest:  - 07
// Judge: TLX
// URL: https://tlx.toki.id/courses/competitive/chapters/07/problems/C/
// Memory Limit: 16
// Time Limit: 1000
// Start: Tue 23 Apr 2024 11:33:51 AM WIB

#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int N;
int dp[1001];

void solve() {
  cin >> N;

  dp[0] = 0;
  for (int i = 1; i <= N; i++) {
    dp[i] = max(i, dp[i / 2] + dp[i / 3] + dp[i / 4]);
  }
  cout << dp[N] << "\n";
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  solve();
}

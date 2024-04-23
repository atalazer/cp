// Problem: A - Frog 1
// Contest: Educational DP Contest
// Judge: AtCoder
// URL: https://atcoder.jp/contests/dp/tasks/dp_a
// Memory Limit: 1024
// Time Limit: 2000
// Start: Tue 09 Apr 2024 05:17:47 AM WIB

#include <bits/stdc++.h>
using namespace std;

#define ll long long

const ll INF = 1LL << 60;

vector<ll> dp(100005, INF);

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  ll n, step;
  cin >> n;

  vector<ll> h(n);

  for (ll i = 0; i < n; i++) {
    cin >> h[i];
  }

  dp[0] = 0;

  // DP
  for (int i = 1; i < n; ++i) {
    // 1 Step
    step = dp[i - 1] + abs(h[i] - h[i - 1]);
    dp[i] = min(dp[i], step);

    // 2 Step
    if (i > 1) {
      step = dp[i - 2] + abs(h[i] - h[i - 2]);
      dp[i] = min(dp[i], step);
    }
  }

  // Print Answer
  cout << dp[n - 1] << endl;
}

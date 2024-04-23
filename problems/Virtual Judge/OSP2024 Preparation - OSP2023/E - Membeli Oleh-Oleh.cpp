// Problem: E - Membeli Oleh-Oleh
// Contest: OSP2024 Preparation - OSP2023
// Judge: Virtual Judge
// URL: https://vjudge.net/contest/623072#problem/E
// Memory Limit: 256
// Time Limit: 2000
// Start: Wed 17 Apr 2024 05:26:52 PM WIB

#include <bits/stdc++.h>
using namespace std;

#define ll long long

const ll MOD = 1'000'000'000;

ll N, M, A[101];
vector<ll> G[101];

ll dp[101][100'001];

ll DP(ll node, ll k, ll parent) {
  ll& result = dp[node][k];

  if (result != -1) {
    return result;
  }

  result = 0;

  if (k >= A[node]) {
    result++;

    for (auto child : G[node]) {
      if (child != parent) {
        result += DP(child, k - A[node], node);
        result %= MOD;
      }
    }
  }

  for (auto child : G[node]) {
    if (child != parent) {
      result += DP(child, k, node);
      result %= MOD;
    }
  }

  return result;
}

void solve() {
  cin >> N >> M;

  for (ll i = 1; i <= N; i++) {
    cin >> A[i];
  }

  for (ll i = 1; i <= N - 1; i++) {
    ll u, v;
    cin >> u >> v;
    G[u].push_back(v);
    G[v].push_back(u);
  }

  memset(dp, -1, sizeof(dp));

  for (ll k = 1; k <= M; k++) {
    cout << DP(1, k, -1) << "\n";
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  solve();
}

// Problem: C - Pembangkit Listrik
// Contest: OSP2024 Preparation - OSP2023
// Judge: Virtual Judge
// URL: https://vjudge.net/contest/623072#problem/C
// Memory Limit: 64
// Time Limit: 2000
// Start: Wed 17 Apr 2024 05:26:40 PM WIB

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define all(x) (x).begin(), (x).end()

vector<ll> difficulty;
vector<ll> cost;

vector<vector<ll>> G; // Adjacency List
vector<bool> visited;

// Mencari tingkat kesulitan paling minimum dari beberapa desa yang terhubung dengan DFS
ll dfs(ll u) {
  visited[u] = true;
  ll ret = difficulty[u];

  for (auto v : G[u]) {
    if (!visited[v]) {
      ret = min(ret, dfs(v));
    }
  }
  return ret;
}

void solve() {
  ll n, m, k;
  cin >> n >> m >> k;

  G.resize(n + 1, vector<ll>(0));
  visited.resize(n + 1);
  difficulty.resize(n + 1);
  cost.resize(m);

  // 1-based index
  for (ll i = 1; i <= n; i++) {
    cin >> difficulty[i];
  }

  // 0-based index
  for (ll i = 0; i < m; i++) {
    cin >> cost[i];
  }
  sort(all(cost));

  for (ll i = 1; i <= k; i++) {
    ll u, v;
    cin >> u >> v;
    G[u].push_back(v);
    G[v].push_back(u);
  }

  vector<ll> generator;

  for (ll i = 1; i <= n; i++) {
    if (!visited[i]) {
      generator.push_back(dfs(i));
    }
  }
  sort(all(generator));

  ll tg = generator.size(); // Total generator

  if (tg > m) {
    cout << "-1\n";
    return;
  }

  ll ans = 0;
  for (ll i = 0; i < tg; i++) {
    ans += generator[tg - 1 - i] * cost[i];
  }

  cout << ans << "\n";
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  solve();
}

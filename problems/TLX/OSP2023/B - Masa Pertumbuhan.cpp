// Problem: B - Masa Pertumbuhan
// Contest: OSP2024 Preparation - OSP2023
// Judge: Virtual Judge
// URL: https://vjudge.net/contest/623072#problem/B
// Memory Limit: 64
// Time Limit: 2000
// Start: Wed 17 Apr 2024 05:26:09 PM WIB

#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve(){
  ll n, m, k, ans = 0; cin >> n >> m >> k;

  // Use 1-based index
  ll a[n+1];

  for(ll i = 1; i <= n; i++){
    cin >> a[i];
  }
  sort(a+1, a+n+1);

  for(ll i = 1; i <= n; i++){
    if(a[i] > m+k){
      m = a[i];
      ans++;
    }
  }
  cout << ans << "\n";
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  solve();
}

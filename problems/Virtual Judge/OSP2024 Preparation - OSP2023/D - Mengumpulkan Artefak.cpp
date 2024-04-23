// Problem: D - Mengumpulkan Artefak
// Contest: OSP2024 Preparation - OSP2023
// Judge: Virtual Judge
// URL: https://vjudge.net/contest/623072#problem/D
// Memory Limit: 64
// Time Limit: 2000
// Start: Wed 17 Apr 2024 05:26:45 PM WIB

#include <bits/stdc++.h>
using namespace std;

using ll = long long int;

void solve(){
  // NOTES: Using 1-based index!

  ll n, k, x; cin >> n >> k >> x;
  vector<ll> a(n+1), b(n+1);

  for(ll i = 1; i <= n; i++) cin >> a[i];

  b[0] = 0;
  for(ll i = 1; i <= n; i++){
    cin >> b[i];
    b[i] += b[i - 1];
  }

  ll ans = 0;
  for(ll i = 1; i <= n; i++){
    ll left = i, right = n, mid, dist;

    while(left <= right){
      mid = (left+right)/2;

      dist = min(abs(x - a[mid]), abs(x - a[i])) + a[mid] - a[i];

      if(dist > k){
        right = mid - 1;
      } else {
        ans = max(ans, b[mid] - b[i - 1]);
        left = mid + 1;
      }

    }
  }

  cout << ans << "\n";
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  solve();
}

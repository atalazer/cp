// Problem: A. Vanya and Fence
// Contest: Codeforces Round 355 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/677/problem/A
// Memory Limit: 256
// Time Limit: 1000
// Start: Tue 09 Apr 2024 10:54:10 AM WIB

#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
  ll n, h, a, ans = 0;
  cin >> n >> h;

  for(ll i = 0; i < n; i++){
    cin >> a;
    ans += (a > h ? 2 : 1);
  }

  cout << ans << '\n';
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  // cin >> t;

  while(t--){
    solve();
  }
}

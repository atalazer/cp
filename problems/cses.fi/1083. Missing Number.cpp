// Problem: Missing Number
// URL: https://cses.fi/problemset/task/1083
// Memory Limit: 512
// Time Limit: 1000

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  ll n, x;
  cin >> n;

  ll ans = n * (1 + n);
  ans /= 2;
  for (ll i = 0; i < n - 1; i++) {
    cin >> x;
    ans -= x;
  }
  cout << ans;
}

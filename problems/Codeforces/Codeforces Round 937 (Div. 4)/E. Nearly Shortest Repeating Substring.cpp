// Problem: E. Nearly Shortest Repeating Substring
// Contest: Codeforces Round 937 (Div. 4)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1950/problem/E
// Memory Limit: 256
// Time Limit: 2000
// Start: Tue 09 Apr 2024 05:51:06 AM WIB

#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
  ll n, diffTolerate;
  cin >> n;
  string s;
  cin >> s;

  for (ll i = 1; i <= n; i++) {
    if (n % i == 0) {
      // From the prefix string

      diffTolerate = 2;

      for (ll j = 0; j < i; j++) {
        for (ll k = j + i; k < n; k += i) {
          if (s[k] != s[j]) {
            diffTolerate--;
          }
        }
      }

      if (diffTolerate > 0) {
        cout << i << '\n';
        return;
      }

      // From the suffix string

      diffTolerate = 2;

      for (ll j = n - i; j < n; j++) {
        for (ll k = j - i; k >= 0; k -= i) {
          if (s[k] != s[j]) {
            diffTolerate--;
          }
        }
      }

      if (diffTolerate > 0) {
        cout << i << '\n';
        return;
      }
    }
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    solve();
  }
}

// Problem: C. Can I Square?
// URL: https://codeforces.com/contest/1915/problem/C
// Memory Limit: 256
// Time Limit: 1000

#include <bits/stdc++.h>
#include <cmath>

#define ll long long

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  ll t, n, a;
  cin >> t;

  while (t--) {
    int sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
      cin >> a;
      sum += a;
    }

    cout << ((sqrt(sum) * sqrt(sum) == sum) ? "YES" : "NO") << endl;
  }

  return 0;
}

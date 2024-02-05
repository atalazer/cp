// Problem: Permutations
// URL: https://cses.fi/problemset/task/1070
// Memory Limit: 512
// Time Limit: 1000

#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  ll n;
  cin >> n;

  if (n == 1) {
    cout << n << '\n';
  } else if (n == 3 || n == 2) {
    cout << "NO SOLUTION\n";
  } else if (n == 4) {
    cout << "2 4 1 3\n";
  } else {

    vector<ll> perm(n);
    ll count = 0;

    // odd number
    for (ll i = 1; i <= n; i += 2) {
      perm[count++] = i;
    }

    // even number
    for (ll i = 2; i <= n; i += 2) {
      perm[count++] = i;
    }

    // checker
    /* sort(perm.begin(), perm.end(), [](int a, int b) { return a > 1; }); */
    reverse(perm.begin(), perm.end());

    // output
    for (int i = 0; i < n; i++) {
      cout << perm[i] << ((i != n - 1) ? " " : "\n");
    }
  }
}

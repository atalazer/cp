// Problem: E - Long Inversions
// Contest: Testing vjudge but actually upsolve CF938 :)
// Judge: Virtual Judge
// URL: https://vjudge.net/contest/622667#problem/E
// Memory Limit: 256
// Time Limit: 3000
// Start: Mon 15 Apr 2024 09:34:45 PM WIB

#include <bits/stdc++.h>

using ll = signed long long int;

#define all(x) (x).begin(), (x).end()

using pii = std::array<int, 2>;
using pll = std::array<ll, 2>;
using vi = std::vector<int>;
using vl = std::vector<ll>;

using namespace std;

void upsolve() {
  int n;
  string s;
  cin >> n >> s;
  for (int k = n; k > 0; --k) {
    vector<char> t(n), end(n + 1);

    for (int i = 0; i < n; ++i) {
      t[i] = s[i] - '0';
    }

    int cnt = 0;
    for (int i = 0; i < n; ++i) {
      cnt -= end[i];
      t[i] ^= (cnt & 1);
      if (t[i] == 0) {
        if (i + k <= n) {
          ++end[i + k];
          ++cnt;
          t[i] = 1;
        } else {
          break;
        }
      }
    }

    if (*min_element(all(t)) == 1) {
      cout << k << '\n';
      return;
    }
  }
  assert(false);
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    upsolve();
  }
}

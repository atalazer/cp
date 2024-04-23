// Problem: D - Inaccurate Subsequence Search
// Contest: Testing vjudge but actually upsolve CF938 :)
// Judge: Virtual Judge
// URL: https://vjudge.net/contest/622667#problem/D
// Memory Limit: 256
// Time Limit: 2000
// Start: Mon 15 Apr 2024 09:27:09 PM WIB

#include <bits/stdc++.h>

using ll = signed long long int;

#define all(x) (x).begin(), (x).end()

using pii = std::pair<int, int>;
using pll = std::pair<ll, ll>;

using namespace std;

void upsolve() {
  int n, m;
  size_t k;
  cin >> n >> m >> k;

  vector<int> a(n);
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }

  multiset<int> todo, done, extra;

  for (int j = 0; j < m; ++j) {
    int b;
    cin >> b;
    todo.insert(b);
  }

  for (int j = 0; j < m; ++j) {
    if (todo.find(a[j]) != todo.end()) {
      todo.erase(todo.find(a[j]));
      done.insert(a[j]);
    } else {
      extra.insert(a[j]);
    }
  }

  int ans = (done.size() >= k);

  for (int r = m; r < n; ++r) {
    int old = a[r - m];

    if (extra.find(old) != extra.end()) {
      extra.erase(extra.find(old));
    } else if (done.find(old) != done.end()) {
      done.erase(done.find(old));
      todo.insert(old);
    }

    if (todo.find(a[r]) != todo.end()) {
      todo.erase(todo.find(a[r]));
      done.insert(a[r]);
    } else {
      extra.insert(a[r]);
    }

    ans += (done.size() >= k);
  }

  cout << ans << '\n';
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    upsolve();
  }
}

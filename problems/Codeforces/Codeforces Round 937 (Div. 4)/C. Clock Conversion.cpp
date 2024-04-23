// Problem: C. Clock Conversion
// Contest: Codeforces Round 937 (Div. 4)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1950/problem/C
// Memory Limit: 256
// Time Limit: 1000
// Start: Mon 08 Apr 2024 09:42:39 PM WIB

#include <bits/stdc++.h>
using namespace std;

void solve() {
  int h, m;
  char c;
  cin >> h >> c >> m;

  string am = (h < 12 ? "AM" : "PM");

  h = (h % 12 != 0 ? h % 12 : 12);

  cout << (h < 10 ? "0" : "") << h << c << (m < 10 ? "0" : "") << m << " " << am
       << "\n";
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

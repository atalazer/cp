//(h < 10 ? "0" : "") Problem: A. Yogurt Sale
// Contest: Codeforces Round 938 (Div. 3)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1955/problem/A
// Memory Limit: 256
// Time Limit: 1000
// Start: Mon 08 Apr 2024 10:09:20 PM WIB

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int t, n, a, b;

  cin >> t;

  while (t--) {
    cin >> n >> a >> b;
    if (2 * a < b) b = 2 * a;
    cout << (n / 2) * b + (n % 2) * a << '\n';
  }
}

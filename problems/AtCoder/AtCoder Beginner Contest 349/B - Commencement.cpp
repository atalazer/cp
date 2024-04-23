// Problem: B - Commencement
// Contest: AtCoder Beginner Contest 349
// Judge: AtCoder
// URL: https://atcoder.jp/contests/abc349/tasks/abc349_b
// Memory Limit: 1024
// Time Limit: 2000
// Start: Thu 18 Apr 2024 10:48:36 AM WIB

#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
  string S;
  cin >> S;
  vector<int> C(128);
  for (char c : S) {
    C[c]++;
  }

  vector<int> D(S.size() + 1);
  for (int i = 0; i < 128; i++) {
    D[C[i]]++;
  }

  bool isGood = true;
  for (int i = 1; i <= S.size(); i++) {
    isGood &= D[i] == 0 || D[i] == 2;
  }
  cout << (isGood ? "Yes" : "No") << '\n';
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  // cin >> t;

  while (t--) {
    solve();
  }
}

// Problem: Repetitions
// URL: https://cses.fi/problemset/task/1069
// Memory Limit: 512
// Time Limit: 1000

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  string s;
  cin >> s;

  char cur, prev;
  int ans = 1, mx = 1;

  for (int i = 1; i < s.size(); i++) {
    prev = s[i - 1];
    cur = s[i];

    if (cur == prev) {
      mx++;
    } else {
      mx = 1;
    }

    ans = max(ans, mx);
  }

  cout << ans;
}

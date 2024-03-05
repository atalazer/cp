// Problem: A. Magic Numbers
// Contest: Codeforces Round 189 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/320/A
// Memory Limit: 256
// Time Limit: 2000
// Start: Thu 29 Feb 2024 10:13:54 AM WIB

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  string s;
  cin >> s;
  bool magic = true;

  for (int i = 0; i < s.size();) {
    if (s[i] == '1' && s[i + 1] == '4' && s[i + 2] == '4') {
      i += 3;
    } else if (s[i] == '1' && s[i + 1] == '4') {
      i += 2;
    } else if (s[i] == '1') {
      i++;
    } else {
      magic = false;
      break;
    }
  }

  cout << ((magic) ? "YES\n" : "NO\n");
}

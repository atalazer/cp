// Problem: Bit by Bit
// Contest: unknown_contest
// Judge: Kattis
// URL: https://open.kattis.com/problems/bitbybit
// Memory Limit: 1024
// Time Limit: 1000
// Start: Sat 23 Mar 2024 09:39:13 PM WIB

#include <bits/stdc++.h>
using namespace std;

string s;

void SET(int i) { s[31 - i] = '1'; }

void CLEAR(int i) { s[31 - i] = '0'; }

void OR(int i, int j) {
  if (s[31 - i] == '?' || s[31 - j] == '?') s[31 - i] = '?';
  else s[31 - i] = (s[31 - i] == '1' || s[31 - j] == '1') ? '1' : '0';
}

void AND(int i, int j) {
  if (s[31 - i] == '?' || s[31 - j] == '?') s[31 - i] = '?';
  else s[31 - i] = (s[31 - i] == '1' && s[31 - j] == '1') ? '1' : '0';
}

void solve() {
  int n, i, j;
  string task;
  while (cin >> n) {
    if(n < 1) break;
    s = "????????????????????????????????";
    for (int k = 0; k < n; k++) {
      cin >> task;
      if (task == "SET") { cin >> i; SET(i);
      } else if (task == "CLEAR") { cin >> i; CLEAR(i);
      } else if (task == "OR") { cin >> i >> j; OR(i, j);
      } else if (task == "AND") { cin >> i >> j; AND(i, j); }
    }
    cout << s << endl;
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  solve();
}

// Problem: A. Beautiful Year
// Contest: Codeforces Round 166 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/271/A
// Memory Limit: 256
// Time Limit: 2000
// Start: Wed 28 Feb 2024 09:13:16 AM WIB

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int a = 0, b = 0, c = 0, d = 0, y;
  cin >> y;

  while((a == b) || (a == c) || (a == d) || (b == c) || (b == d) || (c == d)){
    y++;
    a = (y / 1000) % 10;
    b = (y / 100) % 10;
    c = (y / 10) % 10;
    d = (y / 1) % 10;
  }

  cout << y << '\n';
}

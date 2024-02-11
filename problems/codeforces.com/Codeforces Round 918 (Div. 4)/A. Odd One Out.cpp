// Problem: A. Odd One Out
// URL: https://codeforces.com/contest/1915/problem/A
// Memory Limit: 256
// Time Limit: 1000

#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int t, a, b, c;
  cin >> t;

  while (t--) {
    cin >> a >> b >> c;
    if (a == b)
      cout << c << endl;
    if (a == c)
      cout << b << endl;
    if (b == c)
      cout << a << endl;
  }

  return 0;
}

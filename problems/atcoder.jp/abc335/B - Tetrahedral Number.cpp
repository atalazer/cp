// Problem: B - Tetrahedral Number
// URL: https://atcoder.jp/contests/abc335/tasks/abc335_b
// Memory Limit: 1024
// Time Limit: 2000

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  for (int x = 0; x <= n; x++) {
    for (int y = 0; y <= n; y++) {
      for (int z = 0; z <= n; z++) {
        if (x + y + z > n)
          break;
        cout << x << " " << y << " " << z << endl;
      }
    }
  }
}

// Problem: D. Pendataan Berat Bebek
// URL: https://tlx.toki.id/courses/competitive/chapters/03/problems/D
// Memory Limit: 64
// Time Limit: 2000

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int n, q, x, y;
  cin >> n;

  long long bebek[n + 5];

  for (int i = 0; i < n; i++) {
    cin >> bebek[i];
  }

  cin >> q;
  while (q--) {
    int ans = 0;
    cin >> x >> y;
    for (int i = 0; i < n; i++) {
      if ((bebek[i] > x) && (bebek[i] <= y)) {
        ans++;
      }
    }
    cout << ans << endl;
  }
}

// Problem: D. Pendataan Berat Bebek
// Contest:  - 03
// Judge: TLX
// URL: https://tlx.toki.id/courses/competitive/chapters/03/problems/D
// Memory Limit: 64
// Time Limit: 2000
// Start: Tue 23 Apr 2024 01:52:44 PM WIB

#include <bits/stdc++.h>
using namespace std;

void solve(){
  int N, Q;
  cin >> N;

  vector<int> B(N+1);
  for(int i = 1; i <= N; i++) cin >> B[i];

  cin >> Q;

  int x, y;
  while(Q--){
    cin >> x >> y;
    auto lower = upper_bound(B.begin(), B.end(), x);
    auto upper = upper_bound(B.begin(), B.end(), y);

    cout << upper - lower << "\n";
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  solve();
}

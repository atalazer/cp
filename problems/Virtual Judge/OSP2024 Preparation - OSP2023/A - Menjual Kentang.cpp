// Problem: A - Menjual Kentang
// Contest: OSP2024 Preparation - OSP2023
// Judge: Virtual Judge
// URL: https://vjudge.net/contest/623072#problem/A
// Memory Limit: 64
// Time Limit: 2000
// Start: Wed 17 Apr 2024 05:26:28 PM WIB

#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
  ll N, M;
  cin >> N >> M;

  // Use 1-based index
  ll A[N+1], B[M+1], sumA = 0, sumB = 0, ans = 0;

  for (ll i = 1; i <= N; i++) {
    cin >> A[i];
    sumA += A[i];
  }

  for (ll i = 1; i <= M; i++) {
    cin >> B[i];
    sumB += B[i];
  }

  if (sumA * M > sumB * N) {
    cout << "0\n";
  } else {
    sort(B+1, B+M+1);

    for (ll i = M; i >= 2; i--) {
      ans += B[i];
      sumA += B[i];
      sumB -= B[i];

      N++;
      M--;

      if (B[i] == B[i - 1]) continue;

      if (sumA * M > sumB * N) {
        cout << ans << "\n";
        return;
      }
    }
    cout << "-1\n";
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  solve();
}

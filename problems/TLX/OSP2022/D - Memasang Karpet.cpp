#include <bits/stdc++.h>
using namespace std;

using ll = unsigned long long int;

const int MOD = 1e9 + 7;

int N, M;

void solve() {
  cin >> N >> M;

  if (N == 1) {
    vector<ll> dp(M + 1);
    dp[1] = 2;
    for (int i = 2; i <= M; i++) {
      dp[i] = (3 * dp[i - 1]) % MOD;
    }
    cout << dp[M];
  } else {
    // TODO
    // for(int i = 2; i <= M; i++){
    //
    // }
  }
}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  solve();
}

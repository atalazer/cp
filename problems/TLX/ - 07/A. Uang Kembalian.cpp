// Problem: A. Uang Kembalian
// Contest:  - 07
// Judge: TLX
// URL: https://tlx.toki.id/courses/competitive/chapters/07/problems/A
// Memory Limit: 64
// Time Limit: 2000
// Start: Tue 23 Apr 2024 09:59:16 AM WIB

#include <bits/stdc++.h>
using namespace std;

const int OO = 1e9;

int N, K, minCoin;

int A[505];
int dp[50005];

void solve(){
  // Input
  cin >> N;
  for(int i = 0; i < N; i++){
    cin >> A[i];
  }
  cin >> K;

  // Bottom-Up Approach
  dp[0] = 0;
  for(int x = 1; x <= K; x++){
    minCoin = OO;
    for(int c = 0; c < N; c++){
      if(A[c] <= x){
        minCoin = min(minCoin, dp[x - A[c]] + 1);
      }
    }
    dp[x] = minCoin;
  }
  cout << dp[K];
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  // cin >> t;

  while(t--){
    solve();
  }
}

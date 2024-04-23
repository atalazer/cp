// Problem: D. Palindrom
// Contest:  - 07
// Judge: TLX
// URL: https://tlx.toki.id/courses/competitive/chapters/07/problems/D
// Memory Limit: 64
// Time Limit: 1000
// Start: Tue 23 Apr 2024 11:38:21 AM WIB

#include <bits/stdc++.h>
using namespace std;

const int MAXN = 50;

int N;
string s;

int dp[MAXN][MAXN];

int DP(int left, int right) {
  if(left > right) return 0;
  if(left == right) return 1; // Base case
  if(dp[left][right] != -1) return dp[left][right];

  int ans = 0;
  if (s[left] == s[right]) {
    ans = 2 + DP(left + 1, right - 1);
  } else {
    ans = max(DP(left, right - 1), DP(left + 1, right));
  }

  return dp[left][right] = ans;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> N;
  while (N--) {
    cin >> s;
    memset(dp, -1, sizeof(dp));
    cout << DP(0, s.size() - 1) << "\n";
  }
}

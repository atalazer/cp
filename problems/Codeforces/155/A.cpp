// Problem: A. I_love_%username%
// Contest: Codeforces Round 109 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/155/A
// Memory Limit: 256
// Time Limit: 2000
// Start: Tue 27 Feb 2024 05:48:57 PM WIB

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int N; cin >> N;
  int A[N], mn, mx = 0, ans = 0;

  for(int i = 1; i <= N; i++){
    cin >> A[i];
    if(i == 1){
      mx = A[i];
      mn = A[i];
    } else {
      if(A[i] > mx){
        mx = A[i];
        ans++;
      } else if(A[i] < mn){
        mn = A[i];
        ans++;
      }
    }
  }

  cout << ans << '\n';
}

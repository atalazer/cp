// Problem: A. Anton and Danik
// Contest: Codeforces Round 379 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/734/problem/A
// Memory Limit: 256
// Time Limit: 1000
// Start: Tue 09 Apr 2024 10:58:19 AM WIB

#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
  ll n, W = 0;
  string games;
  cin >> n;
  cin >> games;

  for(ll i = 0; i < n; i++){
    W += (games[i] == 'A' ? 1 : -1);
  }

  if(W == 0) cout << "Friendship\n";
  if(W > 0) cout << "Anton\n";
  if(W < 0) cout << "Danik\n";
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

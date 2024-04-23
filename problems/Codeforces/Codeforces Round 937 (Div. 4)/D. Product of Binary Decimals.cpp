// Problem: D. Product of Binary Decimals
// Contest: Codeforces Round 937 (Div. 4)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1950/problem/D
// Memory Limit: 256
// Time Limit: 3000
// Start: Tue 09 Apr 2024 06:04:26 AM WIB

#include <bits/stdc++.h>
using namespace std;

#define ll long long

const ll MAX = 100'001;

vector<ll> binaryDecimals;

bool check(ll n){
  if( n == 1 ) return true;

  bool ans = false;
  for(ll i : binaryDecimals){
    if(n % i == 0){
      ans = ans | check(n/i);
    }
  }

  return ans;
}

void solve(){
  ll n; cin >> n;
  cout << (check(n) ? "YES\n" : "NO\n");
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  for(ll i = 2; i < MAX; i++){
    ll current = i;
    bool isBinary = true;
    while(current > 0){
      if(current % 10 > 1){
        isBinary = false;
        break;
      }
      current /= 10;
    }
    if(isBinary) { binaryDecimals.push_back(i); }
  }

  int t;
  cin >> t;

  while(t--){
    solve();
  }
}

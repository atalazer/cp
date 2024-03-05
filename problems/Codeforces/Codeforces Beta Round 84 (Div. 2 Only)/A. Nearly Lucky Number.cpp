// Problem: A. Nearly Lucky Number
// Contest: Codeforces Beta Round 84 (Div. 2 Only)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/110/A
// Memory Limit: 256
// Time Limit: 2000
// Start: Thu 29 Feb 2024 09:20:25 AM WIB

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  ll n;
  cin >> n;
  ll luckyDigit = 0;

  while(n > 0){
    if(n % 10 == 4) luckyDigit++;
    if(n % 10 == 7) luckyDigit++;
    n /= 10;
  }

  if(luckyDigit == 4 || luckyDigit == 7){
    cout << "YES\n";
  } else {
    cout << "NO\n";
  }
}

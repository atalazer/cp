// Problem: A. Even Odds
// Contest: Codeforces Round 188 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/318/A
// Memory Limit: 256
// Time Limit: 1000
// Start: Thu 29 Feb 2024 10:55:09 AM WIB

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  ll n, k;
  cin >> n >> k;

  ll even = n / 2;
  ll odd = n - even;

  // odd  = 2i-1
  // even = 2i
  // where i is the index start from 1
  cout << ((k > odd) ? ((k - odd) * 2) : ((k * 2) - 1)) << '\n';
}

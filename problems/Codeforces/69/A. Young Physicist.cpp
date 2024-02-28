// Problem: A. Young Physicist
// Contest: Codeforces Beta Round 63 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/69/A
// Memory Limit: 256
// Time Limit: 2000
// Start: Tue 27 Feb 2024 09:39:24 PM WIB

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int N; cin >> N;
  int x = 0, y = 0, z = 0;
  int a, b, c;

  for(int i = 1; i <= N; i++){
    cin >> a >> b >> c;
    x += a; y += b; z += c;
  }
  if((x == 0) && (y == 0) && (z == 0)){
    cout << "YES\n";
  } else {
    cout << "NO\n";
  }

}

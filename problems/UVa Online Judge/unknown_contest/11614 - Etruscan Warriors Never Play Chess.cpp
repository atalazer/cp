// Problem: 11614 - Etruscan Warriors Never Play Chess
// Contest: unknown_contest
// Judge: UVa Online Judge
// URL: https://onlinejudge.org/index.php?option=onlinejudge&Itemid=8&page=show_problem&problem=2661
// Memory Limit: 32
// Time Limit: 1000
// Start: Mon 04 Mar 2024 02:52:39 PM WIB

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  long long t, n;
  cin >> t;
  while(t--){
    cin >> n;
    cout << ceil(sqrt(n)) << '\n';
  }
}

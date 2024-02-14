// Problem: A. Elephant
// URL: https://codeforces.com/problemset/problem/617/A
// Memory Limit: 256
// Time Limit: 1000

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int x;
  cin >> x;
  cout << ((x % 5 == 0) ? (x / 5) : ((x / 5) + 1)) << '\n';
}

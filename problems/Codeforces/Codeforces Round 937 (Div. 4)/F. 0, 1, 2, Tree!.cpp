// Problem: F. 0, 1, 2, Tree!
// Contest: Codeforces Round 937 (Div. 4)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1950/problem/F
// Memory Limit: 256
// Time Limit: 2000
// Start: Tue 09 Apr 2024 06:34:34 AM WIB

#include <bits/stdc++.h>
using namespace std;

#define ll long long


ll a, b, c;

void solve(){
  cin >> a >> b >> c;

  // Special testcase
  if (a + 1 != c) {cout << -1 << '\n'; return;}
	if (a + b + c == 1) {cout << 0 << '\n'; return;}

  // height  : depth of the tree
  // current : nodes in (n)-th depth
  // next    : nodes in (n+1)-th depth
  ll height = 1, current = 1, next = 0;

  // do loop for node that have child node (a & b node)
  for(ll i = 0; i < a + b; i++){
    // Move to next depth if nodes in current depth is up.
    if(current == 0){
      swap(next, current);
      height++;
    }

    // traverse root node
    current--;

    // add it child node(s)
    next += (i < a ? 2 : 1);
  }

  // print the height
  cout << height << '\n';
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while(t--){
    solve();
  }
}

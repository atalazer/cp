// Problem: A. Stair, Peak, or Neither?
// Contest: Codeforces Round 937 (Div. 4)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1950/problem/A
// Memory Limit: 256
// Time Limit: 1000
// Start: Mon 08 Apr 2024 09:10:22 PM WIB

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int t, a, b, c;

  cin >> t;

  while(t--){
    cin >> a >> b >> c;

    if((a < b) && (b < c)){
      cout << "STAIR\n";
    } else if((a < b) && (b > c)){
      cout << "PEAK\n";
    } else {
      cout << "NONE\n";
    }
  }
}

// Problem: B. Upscaling
// Contest: Codeforces Round 937 (Div. 4)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1950/problem/B
// Memory Limit: 256
// Time Limit: 1000
// Start: Mon 08 Apr 2024 09:15:20 PM WIB

#include <bits/stdc++.h>
using namespace std;

void draw(int n){
  for(int i = 0; i < 2*n; i++){
    for(int j = 0; j < 2*n; j++){
      cout << (i/2 + j/2 & 1 ? "." : "#");
    }
    cout << "\n";
  }

}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int t, n;

  cin >> t;

  while(t--){
    cin >> n;
    draw(n);
  }
}

// Problem: C. Registration system
// URL: https://codeforces.com/contest/4/problem/C
// Memory Limit: 64
// Time Limit: 5000

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  // Your code here
  int n;
  cin >> n;

  map<string, int> reg;

  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;

    if (!reg[s]) {
      reg[s] = 1;
      cout << "OK\n";
    } else {
      cout << s << reg[s] << "\n";
      reg[s]++;
    }
  }

  return 0;
}

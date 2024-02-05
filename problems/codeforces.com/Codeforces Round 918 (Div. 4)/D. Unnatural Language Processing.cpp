// Problem: D. Unnatural Language Processing
// URL: https://codeforces.com/contest/1915/problem/D
// Memory Limit: 256
// Time Limit: 1000

#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int t, n;
  char c;
  cin >> t;

  while (t--) {
    cin >> n;

    vector<char> str;
    vector<char> kind;
    for (int i = 0; i < n; i++) {
      cin >> c;
      str.push_back(c);
      if ((c == 'a') || (c == 'e'))
        kind[i] = 'V';
      else
        kind[i] = 'C';
    }

    char prev, next;
    for (int i = 2; i < n - 1; i++) {
      prev = kind[i - 1];
      next = kind[i + 1];
    }
  }

  return 0;
}

// Problem: A - 202<s>3</s>
// URL: https://atcoder.jp/contests/abc335/tasks/abc335_a
// Memory Limit: 1024
// Time Limit: 2000

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  string s;
  cin >> s;
  s[s.size() - 1] = '4';
  cout << s << '\n';
}

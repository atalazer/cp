// Problem: A. Word
// Contest: Codeforces Beta Round 55 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/59/A
// Memory Limit: 256
// Time Limit: 2000
// Start: Wed 28 Feb 2024 07:15:14 AM WIB

#include <bits/stdc++.h>
#include <cctype>
#include <ios>
using namespace std;

#define ll long long

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  char x;
  int lw = 0, up = 0;
  string s;
  cin >> s;

  for (int i = 0; i < s.size(); i++) {
    x = s[i];
    if (x >= 'a') lw++;
    if (x < 'a') up++;
  }

  // // Make lowercase or uppercase (Method 1: use iterations)
  // for (int i = 0; i < s.size(); i++) {
  //   s[i] = (lw >= up) ? tolower(s[i]) : toupper(s[i]);
  // }

  // // Make lowercase or uppercase (Method 2: use C++ built-in function -> more efficient)
  if(lw >= up){
    transform(s.begin(), s.end(), s.begin(), ::tolower);
  } else {
    transform(s.begin(), s.end(), s.begin(), ::toupper);
  }

  cout << s << '\n';
  return 0;
}

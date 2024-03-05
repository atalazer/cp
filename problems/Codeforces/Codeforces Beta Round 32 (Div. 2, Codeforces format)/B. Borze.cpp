// Problem: B. Borze
// Contest: Codeforces Beta Round 32 (Div. 2, Codeforces format)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/32/B
// Memory Limit: 256
// Time Limit: 2000
// Start: Thu 29 Feb 2024 09:12:05 AM WIB

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  string s; cin >> s;
  string out = "";
  // .  -> 0
  // -. -> 1
  // -- -> 2

  for(int i = 0; i < s.size(); i++){
    if(s[i] == '.'){
      out += '0';
    } else {
      if(s[i+1] == '.'){
        out += '1';
      } else {
        out += '2';
      }
      i++;
    }
  }

  cout << out << '\n';

}

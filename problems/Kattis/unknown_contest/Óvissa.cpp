// Problem: Óvissa
// Contest: unknown_contest
// Judge: Kattis
// URL: https://open.kattis.com/problems/ovissa
// Memory Limit: 1024
// Time Limit: 1000
// Start: Mon 04 Mar 2024 02:10:26 PM WIB

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int uncertainLevel = 0;
  string s;
  cin >> s;

  for(int i = 0; i < s.size(); i++){
    if(s[i] == 'u') uncertainLevel++;
  }

  cout << uncertainLevel;
}

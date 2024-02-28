// Problem: B. Queue at the School
// Contest: Codeforces Round 163 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/266/B
// Memory Limit: 256
// Time Limit: 2000
// Start: Tue 27 Feb 2024 10:09:26 PM WIB

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, t, next;
  cin >> n >> t;

  char str[n];
  for (int i = 0; i < n; i++) {
    cin >> str[i];
  }

  for (int i = 0; i < n; i++){
    if(str[i] == 'G') continue;
    
    int count = t;
    for(int j = i+1; j < n && count > 0; j++){
      if(str[j] == 'G'){
        swap(str[i++], str[j]);
        count--;
      }
    }
  }

  for(int i = 0; i < n; i++){
    cout << str[i];
  }
  cout << '\n';
}

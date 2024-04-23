// Problem: C. Inhabitant of the Deep Sea
// Contest: Codeforces Round 938 (Div. 3)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1955/problem/C
// Memory Limit: 256
// Time Limit: 2000
// Start: Mon 08 Apr 2024 11:01:51 PM WIB

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve() {
  ll n, k;
  cin >> n >> k;

  vector<ll> a(n);
  ll first = 0, last = n - 1, sunk = 0;

  for (ll i = 0; i < n; i++) {
    cin >> a[i];
  }

  for (ll att = 1; att <= k; att++) {
    if (att % 2 == 0) {
      a[last]--;
      if (a[last] == 0) {
        last--;
        sunk++;
      }
    } else {
      a[first]--;
      if (a[first] == 0) {
        first++;
        sunk++;
      }
    }
  }

  cout << sunk << '\n';
}

void upsolve(){
  int n;
  ll k;
  cin >> n >> k;

  deque<ll> dq(n);
  for(int i = 0; i < n; i++){
    cin >> dq[i];
  }

  while(dq.size() > 1 && k){
    ll mn = min(dq.front(), dq.back());

    if(k < 2 * mn){
      dq.front() -= k/2 + k % 2;
      dq.back() -= k/2;
      k = 0;
    } else {
      dq.front() -= mn;
      dq.back() -= mn;
      k -= 2 * mn;
    }

    if(dq.front() == 0)
      dq.pop_front();

    if(dq.back() == 0)
      dq.pop_back();
  }
  int ans = n - dq.size();
  cout << ans + (dq.size() && dq.front() <= k) << '\n';
}


int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    // solve();
    upsolve();
  }
}

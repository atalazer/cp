// Problem: Increasing Array
// URL: https://cses.fi/problemset/task/1094
// Memory Limit: 512
// Time Limit: 1000

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  ll n, ans = 0;
  cin >> n;

  ll arr[200005];

  for (ll i = 0; i < n; i++) {
    cin >> arr[i];
  }

  for (ll i = 1; i < n; i++) {
    if (arr[i] >= arr[i - 1]) {
      continue;
    } else {
      ans += arr[i - 1] - arr[i];
      arr[i] += arr[i - 1] - arr[i];
    }
  }

  cout << ans;
}

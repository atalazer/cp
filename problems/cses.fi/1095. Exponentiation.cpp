// Problem: Exponentiation
// URL: https://cses.fi/problemset/task/1095
// Memory Limit: 512
// Time Limit: 1000

#include <bits/stdc++.h>
using namespace std;

#define ll long long

const ll MOD = 1e9 + 7;

// Using fast Exponentiation algorithm
// - https://www.rookieslab.com/posts/fast-power-algorithm-exponentiation-by-squaring-cpp-python-implementation
// - https://github.com/Jonathan-Uy/CSES-Solutions/blob/main/Mathematics/Exponentiation%20I.cpp
ll power(ll a, ll b) {
  ll res = 1;

  while (b > 0) {
    if (b % 2 == 1)
      res = (res * a) % MOD;
    a = (a * a) % MOD;
    b /= 2;
  }

  return res;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  ll n, a, b;

  cin >> n;
  while (n--) {
    cin >> a >> b;
    cout << power(a, b) << endl;
  }
}

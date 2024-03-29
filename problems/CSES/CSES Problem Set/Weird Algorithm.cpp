// Problem: Weird Algorithm
// URL: https://cses.fi/problemset/task/1068
// Memory Limit: 512
// Time Limit: 1000

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  long long n;
  cin >> n;
  cout << n << " ";
  while (n != 1) {
    if (n % 2 == 0) {
      n = n / 2;
    } else {
      n = 3 * n + 1;
    }
    cout << n << " ";
  }
}

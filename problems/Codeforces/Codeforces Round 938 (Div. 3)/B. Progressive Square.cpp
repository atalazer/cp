// Problem: B. Progressive Square
// Contest: Codeforces Round 938 (Div. 3)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1955/problem/B
// Memory Limit: 256
// Time Limit: 2000
// Start: Mon 08 Apr 2024 10:18:27 PM WIB

#include <bits/stdc++.h>

using namespace std;

#define all(x) (x).begin(), (x).end()

using ll = long long;

// Ideas:
// - Track all array item with boolean index array
// - Find the smallest one
// - Check if there is suspicios element then print NO otherwise print YES
void solve() {
  int n, c, d, a, x, minValue;
  cin >> n >> c >> d;

  vector<bool> exist(1000000000, false);
  minValue = 1000000000;
  bool isProgressiveSquare = true;

  for (int i = 0; i < n * n; i++) {
    cin >> x;

    exist[x] = true;
    if (x == minValue) {
      isProgressiveSquare = false;
    }

    minValue = min(minValue, x);
  }

  if (isProgressiveSquare) {
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        a = minValue + i * c + j * d;
        if (!exist[a]) {
          isProgressiveSquare = false;
          break;
        }
      }
    }
  }
  cout << (isProgressiveSquare ? "YES\n" : "NO\n");
}

// Ideas:
// - Create 2 array:
//   1. The Input
//   2. The Answer
// - Check if first array and second array is the same

void upsolve() {
  int n;
  ll c, d;
  cin >> n >> c >> d;

  vector<ll> A(n * n);
  for (int i = 0; i < n * n; i++) {
    cin >> A[i];
  }

  sort(all(A));

  vector<ll> B(n * n);
  B[0] = A[0];

  // For cell (R, 0)
  for (int i = 1; i < n; i++) {
    B[i] = B[i - 1] + c;
  }

  // For cell (R, C)
  for (int i = 1; i < n; i++) {
    for (int j = 0; j < n; j++) {
      B[i * n + j] = B[(i - 1) * n + j] + d;
    }
  }
  sort(all(B));

  cout << (A == B ? "YES" : "NO") << "\n";
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



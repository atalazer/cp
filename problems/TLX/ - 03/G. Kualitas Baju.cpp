// Problem: G. Kualitas Baju
// Contest:  - 03
// Judge: TLX
// URL: https://tlx.toki.id/courses/competitive/chapters/03/problems/G
// Memory Limit: 64
// Time Limit: 1000
// Start: Tue 23 Apr 2024 02:29:34 PM WIB

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int N;
  cin >> N;

  vector<int> quality(N);
  for (int i = 0; i < N; i++) {
    cin >> quality[i];
  }
  sort(quality.begin(), quality.end());

  int mid = (quality.size()) / 2;

  cout << fixed;
  cout << setprecision(1);
  if (quality.size() % 2 == 1) {
    cout << (double)quality[mid];
  } else {
    cout << (double)(quality[mid] + quality[mid - 1]) / 2;
  }
}

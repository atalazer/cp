// Problem: B. Before an Exam
// URL: https://codeforces.com/contest/4/problem/B
// Memory Limit: 64
// Time Limit: 500

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  // Your code here
  int d, sum, smin = 0, smax = 0;
  cin >> d >> sum;

  vector<int> tmin(d), tmax(d);
  for (int i = 0; i < d; i++) {
    cin >> tmin[i] >> tmax[i];
    smin += tmin[i];
    smax += tmax[i];
  }

  if (sum < smin || sum > smax) {
    cout << "NO\n";
    return 0;
  }

  cout << "YES\n";

  int rt = sum - smin;
  for (int i = 0; i < d; i++) {
    int t = tmin[i];
    t = min(t + rt, tmax[i]);
    rt -= (t - tmin[i]);
    cout << t << ((i == d - 1) ? "\n" : " ");
  }

  return 0;
}

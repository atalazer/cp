// Problem: C - Loong Tracking
// URL: https://atcoder.jp/contests/abc335/tasks/abc335_c
// Memory Limit: 1024
// Time Limit: 2000

#include <bits/stdc++.h>
using namespace std;

void update(char direction, vector<pair<int, int>> &part, int n) {

  // update
  vector<pair<int, int>> before_update(n);
  for (int i = 0; i < n; i++) {
    before_update[i] = part[i];
  }

  for (int i = 1; i < n; i++) {
    part[i] = before_update[i - 1];
  }

  // move head
  if (direction == 'R')
    part[0].first++;
  else if (direction == 'L')
    part[0].first--;
  else if (direction == 'U')
    part[0].second++;
  else if (direction == 'D')
    part[0].second--;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, q;
  cin >> n >> q;

  vector<pair<int, int>> part(n);

  for (int i = 0; i < n; i++) {
    part[i] = make_pair(i + 1, 0);
  }

  int query, pos;
  char direction;
  while (q--) {
    cin >> query;

    if (query == 1) {
      cin >> direction;
      update(direction, part, n);
    } else if (query == 2) {
      cin >> pos;
      cout << part[pos - 1].first << " " << part[pos - 1].second << '\n';
    }
  }
}

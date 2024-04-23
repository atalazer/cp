// References:
// - https://codeforces.com/blog/entry/57292
// -
// https://www.hackerearth.com/practice/notes/binary-indexed-tree-or-fenwick-tree/#c217533

#include <bits/stdc++.h>

using namespace std;

// BIT -> Binary Indexed Tree (Fenwick Tree)
// A   -> Array
// N   -> Lenght of Array
int BIT[1001], A[1001], N;

void update(int x, int delta) {
  for (; x <= N; x += x & -x) BIT[x] += delta;
}

int query(int x) {
  int sum = 0;
  for (; x > 0; x -= x & -x) sum += BIT[x];
  return sum;
}

int rangeQuery(int start, int end) { return query(end) - query(start - 1); }

int main() {
  ios_base::sync_with_stdio(false); cin.tie(nullptr);

  cin >> N;

  for (int i = 1; i <= N; i++) {
    cin >> A[i];
    update(i, A[i]);
  }

  cout << query(6) << '\n';
  cout << query(10) << '\n';
  cout << rangeQuery(1, 10) << '\n';
  cout << rangeQuery(3, 6) << '\n';
}

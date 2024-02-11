// Problem: C. Wartel
// URL: https://tlx.toki.id/courses/competitive/chapters/03/problems/C
// Memory Limit: 64
// Time Limit: 2000

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  map<string, int> list;

  int n, q;
  cin >> n >> q;

  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;
    int p;
    cin >> p;
    list.insert({s, p});
  }

  for (int i = 0; i < q; i++) {
    string query;
    cin >> query;

    if (list.count(query) > 0)
      cout << list[query] << '\n';
    else
      cout << "NIHIL\n";
  }
}

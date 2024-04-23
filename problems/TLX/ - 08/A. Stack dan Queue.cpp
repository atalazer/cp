// Problem: A. Stack dan Queue
// Contest:  - 08
// Judge: TLX
// URL: https://tlx.toki.id/courses/competitive/chapters/08/problems/A/
// Memory Limit: 16
// Time Limit: 1000
// Start: Tue 23 Apr 2024 02:44:47 PM WIB

#include <bits/stdc++.h>
using namespace std;

void solve() {
  int N;
  cin >> N;

  deque<int> dq;

  string operation;
  int num;
  while (N--) {
    cin >> operation;

    if (operation == "push_back") {
      cin >> num; dq.push_back(num);
    } else if (operation == "push_front") {
      cin >> num; dq.push_front(num);
    } else if (operation == "pop_back")
      dq.pop_back();
    else if (operation == "pop_front")
      dq.pop_front();
  }

  for(int x : dq){
    cout << x << "\n";
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  // cin >> t;

  while (t--) {
    solve();
  }
}

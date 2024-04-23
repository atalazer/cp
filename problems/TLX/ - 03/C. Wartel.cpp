// Problem: C. Wartel
// Contest:  - 03
// Judge: TLX
// URL: https://tlx.toki.id/courses/competitive/chapters/03/problems/C
// Memory Limit: 64
// Time Limit: 2000
// Start: Thu 18 Apr 2024 03:08:35 PM WIB

#include <bits/stdc++.h>
using namespace std;

#define ll long long

map<string, string> book;

void solve(){

  int N, Q;
  cin >> N >> Q;

  for (int i = 0; i < N; i++) {
    string nama, nomor;
    cin >> nama >> nomor;
    book.insert({nama, nomor});
  }

  while (Q--){
    string query;
    cin >> query;

    if (book[query].length() > 1)
      cout << book[query] << '\n';
    else
      cout << "NIHIL\n";
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  // cin >> t;

  while(t--){
    solve();
  }
}

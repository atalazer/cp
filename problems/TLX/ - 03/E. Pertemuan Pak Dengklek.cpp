// Problem: E. Pertemuan Pak Dengklek
// Contest:  - 03
// Judge: TLX
// URL: https://tlx.toki.id/courses/competitive/chapters/03/problems/E
// Memory Limit: 64
// Time Limit: 1000
// Start: Tue 23 Apr 2024 02:00:25 PM WIB

#include <bits/stdc++.h>
using namespace std;

void solve(){
  int N; cin >> N;

  vector<pair<int, string>> daftar(N);
  for(int i = 0; i < N; i++){
    string s; cin >> s;
    daftar[i] = {s.size(), s};
  }
  sort(daftar.begin(), daftar.end());
  for(auto nama : daftar){
    cout << nama.second << "\n";
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  solve();
}

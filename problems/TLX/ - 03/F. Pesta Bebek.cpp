// Problem: F. Pesta Bebek
// Contest:  - 03
// Judge: TLX
// URL: https://tlx.toki.id/courses/competitive/chapters/03/problems/F
// Memory Limit: 64
// Time Limit: 1000
// Start: Tue 23 Apr 2024 02:07:12 PM WIB

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int N; cin >> N;
  vector<string> daftar(N);
  for(int i = 0; i < N; i++){
    string nama; cin >> nama;
    daftar[i] = nama;

    int ans = i;

    for(int j = i-1; j >= 0; j--){
      if(daftar[ans] < daftar[j]) {
        swap(daftar[ans], daftar[j]);
        ans--;
      };
    }
    cout << ans+1 << "\n";
  }
}

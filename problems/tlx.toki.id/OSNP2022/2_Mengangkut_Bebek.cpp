#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  long long k, n, ans = 0; 

  cin >> k;
  long long kapasitasKandang[k+5], biayaKandang[k+5];
  biayaKandang[0] = 9999999999999;

  for(long long i = 1; i <= k; i++) cin >> kapasitasKandang[i];
  for(long long i = 1; i <= k; i++) cin >> biayaKandang[i];

  cin >> n;
  long long beratBebek[n+5];

  for(long long i = 1; i <= n; i++) cin >> beratBebek[i];
  sort(beratBebek+1, beratBebek+1+n, greater<long long>());

  for(long long i = 1; i <= n; i++){ 
    long long kandang = 0; // kandidat untuk kandang
    for(long long j = 1; j <= k; j++){
      if(biayaKandang[kandang] > biayaKandang[j] && kapasitasKandang[j] > 0) kandang = j;
    }
    ans += beratBebek[i] * biayaKandang[kandang];
    kapasitasKandang[kandang]--;
  }

  cout << ans;
}

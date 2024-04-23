#include <bits/stdc++.h>
using namespace std;

using ll = unsigned long long int;
const int MAXV = 1e9;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  ll K, N, ans = 0;

  cin >> K;
  vector<ll> kapasitasKandang(K + 1), biayaKandang(K + 1);
  biayaKandang[0] = MAXV;

  for (ll i = 1; i <= K; i++) cin >> kapasitasKandang[i];
  for (ll i = 1; i <= K; i++) cin >> biayaKandang[i];

  cin >> N;
  vector<ll> beratBebek(N + 1);

  for (ll i = 1; i <= N; i++) cin >> beratBebek[i];
  sort(beratBebek.begin()+1, beratBebek.end(), greater<ll>());

  for (ll i = 1; i <= N; i++) {
    ll kandang = 0;  // kandidat untuk kandang
    for (ll j = 1; j <= K; j++) {
      if (biayaKandang[kandang] > biayaKandang[j] && kapasitasKandang[j] > 0)
        kandang = j;
    }
    ans += beratBebek[i] * biayaKandang[kandang];
    kapasitasKandang[kandang]--;
  }

  cout << ans;
}

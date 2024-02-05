#include <bits/stdc++.h>
using namespace std;

struct Peserta {
  string id;
  int sesi1;
  int sesi2;
  int sesi3;
};

bool comparator(Peserta &p1, Peserta &p2) {
  if (p1.sesi3 != p2.sesi3)
    return p1.sesi3 > p2.sesi3;
  if (p1.sesi2 != p2.sesi2)
    return p1.sesi2 > p2.sesi2;
  return p1.sesi1 > p2.sesi1;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  // T: banyak seleksi yang dilakukan
  int T;
  cin >> T;
  for (int i = 0; i < T; i++) {
    // N: kuota peserta yang mendaftar
    // M: kuota peserta yang lulus
    // targetID: ID Peserta yang harus dicek lulus atau tidak
    int N, M;
    cin >> N >> M;
    string targetID;
    cin >> targetID;

    vector<Peserta> peserta(N);
    for (int i = 0; i < N; i++) {
      cin >> peserta[i].id >> peserta[i].sesi1 >> peserta[i].sesi1 >> peserta[i].sesi1;
    }

    sort(peserta.begin(), peserta.end(), comparator);

    bool lulus = false;
    for (int i = 0; i < M; i++) {
      if (peserta[i].id == targetID) {
        lulus = true;
        break;
      }
    }

    if (lulus)
      cout << "YA\n";
    else
      cout << "TIDAK\n";
  }
}

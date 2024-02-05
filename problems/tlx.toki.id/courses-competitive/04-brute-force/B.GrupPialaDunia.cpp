#include <bits/stdc++.h>
using namespace std;

int t, n, skorTebakan[5];
int banyakPertandingan;
pair<int, int> P[15];

bool ans;

void bruteForce(int pertandinganKeN, int skorSementara[]) {
  if (pertandinganKeN >= banyakPertandingan) {
    bool tebakanBenar = true;
    for (int i = 0; i < n; i++) {
      if (skorSementara[i] != skorTebakan[i]) {
        tebakanBenar = false;
        break;
      }
    }
    if (tebakanBenar)
      ans = true;
    return;
  }

  int A = P[pertandinganKeN].first;
  int B = P[pertandinganKeN].second;

  int skorBaru[n];

  // Tim A Menang
  for (int i = 0; i < n; i++) {
    skorBaru[i] = skorSementara[i];
  }
  skorBaru[A] += 3;
  bruteForce(pertandinganKeN + 1, skorBaru);

  // Tim B Menang
  for (int i = 0; i < n; i++) {
    skorBaru[i] = skorSementara[i];
  }
  skorBaru[B] += 3;
  bruteForce(pertandinganKeN + 1, skorBaru);

  // Tim A dan B seri
  for (int i = 0; i < n; i++) {
    skorBaru[i] = skorSementara[i];
  }
  skorBaru[A]++;
  skorBaru[B]++;
  bruteForce(pertandinganKeN + 1, skorBaru);
}
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cin.tie(0);

  cin >> t;
  while (t--) {
    ans = false;

    cin >> n;

    for (int i = 0; i < n; i++)
      cin >> skorTebakan[i];

    banyakPertandingan = 0;
    for (int i = 0; i < n; i++) {
      for (int j = i + 1; j < n; j++) {
        P[banyakPertandingan] = {i, j};
        banyakPertandingan++;
      }
    }

    // Skor Awal
    int skorAwal[n];
    fill(skorAwal, skorAwal + n, 0);
    bruteForce(0, skorAwal);

    if (ans)
      cout << "YES\n";
    else
      cout << "NO\n";
  }
}

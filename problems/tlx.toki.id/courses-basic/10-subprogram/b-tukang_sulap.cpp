#include <array>
#include <bits/stdc++.h>
using namespace std;

int N;

void tukarNilai(int &a, int &b) {
  int temp = a;
  a = b;
  b = temp;
}

void masukkanNBilanganKeBaris(int *baris) {
  for (int i = 0; i < N; i++) {
    cin >> baris[i];
  }
}

void cetakBaris(int *baris) {
  for (int i = 0; i < N; i++) {
    cout << baris[i];
    if (i < N - 1)
      cout << " ";
    else
      cout << endl;
  }
}

int main() {
  // Masukkan N bola
  cin >> N;

  // Masukkan masing-masing bola pada baris A sejumlah N bola
  int A[N];
  masukkanNBilanganKeBaris(A);

  // Masukkan masing-masing bola pada baris B sejumlah N bola
  int B[N];
  masukkanNBilanganKeBaris(B);

  // Deklarasi T, P, Q, x, dan y
  int T;
  char P, Q;
  int x, y;

  // Masukkan T bola
  cin >> T;
  for (int i = 0; i < T; i++) {
    // Masukkan P x Q y
    cin >> P >> x >> Q >> y;
    x = x - 1;
    y = y - 1;

    // Tukar P[x] dengan Q[y]
    int &a = (P == 'A') ? A[x] : B[x];
    int &b = (Q == 'A') ? A[y] : B[y];
    tukarNilai(a, b);
  }

  // Cetak baris 1
  cetakBaris(A);
  // Cetak baris 2
  cetakBaris(B);
}

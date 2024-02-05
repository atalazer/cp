#include <iostream>
using namespace std;

int main() {
  // deklarasi `n` dan beri masukkan
  int n;
  cin >> n;

  // lakukan `n` kali perulangan
  for (int i = 0; i < n; i++) {
    // deklarasi `x` dan beri masukkan
    int x;
    cin >> x;

    // deklarasi dan inisialisasi `banyak_faktor` dengan 1
    int banyak_faktor = 2;

    // cek apakah `x` merupakan bilangan prima
    for (int pembagi = 1; pembagi * pembagi <= x; pembagi++) {
      if (x % pembagi == 0) {
        banyak_faktor++;
      }
    }

    // jika `banyak_faktor` kurang dari atau sama dengan 6 cetak YA, selain itu cetak BUKAN
    if (banyak_faktor <= 4) {
      cout << "YA" << endl;
    } else {
      cout << "BUKAN" << endl;
    }
  }
}

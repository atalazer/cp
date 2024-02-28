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

    // Cek apakah `x` kurang dari 2 (contohnya: 1, 0, dan bilangan negatif )
    if (x < 2) {
      cout << "BUKAN" << endl;
      continue;
    }
    // Jika `x` lebih dari atau sama dengan 2 lakukan pengecekan lanjut
    else {
      // deklarasi dan inisialisasi `prima` dengan true
      bool prima = true;

      // cek apakah `x` merupakan bilangan prima
      for (int pembagi = 2; pembagi*pembagi <= x; pembagi++) {
        if (x % pembagi == 0) {
          prima = false;
          break;
        }
      }

      // jika prima cetak YA, selain itu cetak BUKAN
      if (prima) {
        cout << "YA" << endl;
      } else {
        cout << "BUKAN" << endl;
      }
    }
  }
}

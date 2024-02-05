#include <iostream>
using namespace std;
int main() {
  int array[101];
  int n;

  // masukkan nilai ke `array` hingga EOF
  while (cin >> array[n]) {
    n++;
  }
  // cetak `array` secara terbalik
  for (int i = n-1; i >= 0; i--) {
    cout << array[i] << endl;
  }
}

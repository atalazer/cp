#include <bits/stdc++.h>
using namespace std;

void _gambar(int n) {
  for (int i = 0; i < n; i++) {
    cout << "*";
  }
  cout << endl;
}

void gambar(int n) {

  if (n == 1)
    return _gambar(n);
  return gambar(n - 1), _gambar(n), gambar(n - 1);
}

int main() {
  int N;
  cin >> N;
  gambar(N);
}

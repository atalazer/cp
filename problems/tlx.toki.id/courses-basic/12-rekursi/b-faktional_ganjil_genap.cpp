#include <bits/stdc++.h>
using namespace std;

// Fungsi rekursif mencari faktorial dari suatu bilangan n;
int faktorial(int n) {
  if (n == 1) {
    return 1;
  }
  if (n % 2 == 0) {
    return n / 2 * faktorial(n - 1);
  } else
    return n * faktorial(n - 1);
}

int main() {
  int N;
  cin >> N;
  cout << faktorial(N) << endl;
}

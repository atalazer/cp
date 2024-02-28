#include <bits/stdc++.h>
using namespace std;

void faktorisasiPrima(int n) {
  for (int i = 2; i <= n; i++) {
    int pangkat = 0;
    while (n % i == 0) {
      n /= i;
      pangkat++;
    }
    if (pangkat > 1) {
      printf("%d^%d", i, pangkat);
    } else if (pangkat == 1) {
      printf("%d", i);
    }
    if (pangkat > 0 && 1 < n){
      printf(" x ");
    }
  }
}

int main() {
  int N;
  cin >> N;
  faktorisasiPrima(N);
}

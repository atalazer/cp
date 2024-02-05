#include <bits/stdc++.h>
using namespace std;

int operasi(int A, int B, int K, int x) {
  for (int i = 0; i < K; i++) {
    x = abs(A * x + B);
  }
  return x;
}

int main() {
  int A, B, K, x;
  cin >> A >> B >> K >> x;
  int hasil = operasi(A, B, K, x);
  cout << hasil << endl;
}

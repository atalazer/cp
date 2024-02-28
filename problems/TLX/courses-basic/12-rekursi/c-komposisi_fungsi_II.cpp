#include <bits/stdc++.h>
using namespace std;

int A, B, K, x;

int operasi(int K, int x) {
  x = abs(A * x + B);
  if (K == 1)
    return x;
  return operasi(K - 1, x);
}

int main() {
  cin >> A >> B >> K >> x;
  cout << operasi(K, x) << endl;
}

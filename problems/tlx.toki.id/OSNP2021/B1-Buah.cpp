#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  // n: jumlah masing-masing jenis apel yang dibeli
  // a: berat apel a
  // b: berat apel b
  int n, a, b;
  cin >> n >> a >> b;

  // Apabila a dan b relatif prima
  int fpb = __gcd(a, b);
  if (fpb == 1) { cout << a + b; return 0; }

  // Apabila a dan b tidak relatif prima
  long long kpk = 1ll * a * b / fpb;
  cout << kpk/a + kpk/b;
}

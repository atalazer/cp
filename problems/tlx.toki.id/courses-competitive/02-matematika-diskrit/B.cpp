#include <bits/stdc++.h>
using namespace std;

bool isPrime[1000001];
int prime[78000];

void sieveOfErathosthenes(int maxn) {
  fill(isPrime, isPrime + maxn, true);
  isPrime[0] = false;
  isPrime[1] = false;

  for (int i = 2; i * i <= maxn; i++) {
    if (isPrime[i]) {
      for (int j = i * i; j <= maxn; j += i) {
        isPrime[j] = false;
      }
    }
  }

  int n = 0;
  for (int i = 1; i <= maxn; i++) {
    if (isPrime[i])
      prime[++n] = i;
  }
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(NULL);

  sieveOfErathosthenes(1000000);

  int T;
  cin >> T;

  for (int i = 0; i < T; i++) {
    int k;
    cin >> k;
    cout << prime[k] << '\n';
  }
}

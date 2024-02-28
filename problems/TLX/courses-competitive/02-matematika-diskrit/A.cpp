#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define space " "

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(NULL);

  ll A, B, C, D, E, F, pembilang, penyebut;
  cin >> A >> B >> C >> D;

  E = A*D+C*B;
  F = B*D;
  pembilang = E/gcd(E, F);
  penyebut = F/gcd(E,F);

  cout << pembilang << space << penyebut;
}

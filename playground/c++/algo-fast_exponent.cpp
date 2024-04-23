#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define endl '\n';

// Fast Exponentiation A.K.A Binary Exponentiation
// Resources:
// - https://cp-algorithms.com/algebra/binary-exp.html
// Applications:
// - ...
// Problems:
// - [[../../problems/CSES/CSES\ Problem\ Set/Exponentiation.cpp]]

// Recursive version
ll fast_pow_v1(ll a, ll b) {
  if (b == 0)
    return 1;

  ll res = fast_pow_v1(a, b / 2);
  if (b % 2)
    return res * res * a;
  else
    return res * res;
}

// Iterative Version
ll fast_pow_v2(ll a, ll b){
  ll res = 1;
  while(b > 0){
    if(b & 1)
      res = res * a;
    a = a * a;
    b = b >> 1;
  }
  return res;
}

// Iterative Version + Bit operation (Fastest)
ll fast_pow_v3(ll a, ll b){
  ll res = 1;
  while(b > 0){
    if(b & 1)
      res = res * a;
    a = a * a;
    b = b >> 1;
  }
  return res;
}

int main() {
  cout << fast_pow_v1(3, 13) << endl;
  cout << fast_pow_v2(4, 12) << endl;
  cout << fast_pow_v3(5, 10) << endl;
  return 0;
}

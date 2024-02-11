#include <bits/stdc++.h>
using namespace std;

bool cekPalindrom(string kata) {
  int len = kata.length();
  for (int i = 0; i <= len / 2; i++) {
    if (kata[i] != kata[len - i - 1])
      return false;
  }
  return true;
}

int main() {
  string kata;
  getline(cin, kata);
  if (cekPalindrom(kata))
    cout << "YA" << endl;
  else
    cout << "BUKAN" << endl;
}

#include <bits/stdc++.h>
using namespace std;

void soal_1();
void soal_2();

int main() {
  soal_1();
  /* soal_2(); */
}

void haha(string d, int n) {
  int l = d.length();
  if (l == n) {
    cout << d << endl;
  } else {
    for (int i = 1; i <= n; ++i) {
      haha(d + to_string(i), n);
    }
  }
}

void soal_1() { haha("", 2); }

void soal_2() {
  int x, y;
  x = 0;
  y = 4;

  for (int i = 1; i <= 4; ++i) {
    for (int j = 1; j <= x; ++j) {
      std::cout << ' ';
    }
    for (int j = y; j >= i; --j) {
      std::cout << '*';
    }
    std::cout << std::endl;
  }
}

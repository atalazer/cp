#include <bits/stdc++.h>
using namespace std;

void soal_1();
void soal_2();
void soal_3();
void soal_4();
void test();

int main() {
  soal_1();
  /* soal_2(); */
  soal_3();

  test();
}

void soal_1() {
  int x, y, temp, dare, num1, num2;
  // std::cin >> x >> y;
  x = 16;
  y = 8;

  num1 = x;
  num2 = y;
  dare = 0;
  temp = 1;
  while (num1 > 0 || num2 > 0) {
    if ((num1 % 2 + num2 % 2) == 1) {
      dare = dare + temp;
    } else {
      dare = dare + ((num1 % 2 + num2 % 2) * temp);
    }
    num1 = num1 / 2;
    num2 = num2 / 2;
    temp = temp * 2;
  }
  std::cout << dare << std::endl;
}

void soal_3() {
  int x, y, temp, dare, num1, num2;
  x = 12;
  y = 30;
  num1 = x;
  num2 = y;
  dare = 0;
  temp = 1;
  while (num1 > 0 || num2 > 0) {
    if ((num1 % 2 + num2 % 2) == 1) {
      dare = dare + temp;
    } else {
      dare = dare + ((num1 % 2 + num2 % 2) * temp);
    }
    num1 = num1 / 2;
    num2 = num2 / 2;
    temp = temp * 2;
  }
  std::cout << dare << std::endl;
}

int ox(int m, int n) {
  if (n == 1)
    return m;
  else if ((n & 1) == 0)
    return ox(m, n >> 1) * ox(m, n >> 1);
  else
    return ox(m, n >> 1) * ox(m, n >> 1) * m;
}

void soal_2() { std::cout << ox(2, 10) << std::endl; }

void test() {

  // test bitwise operator
  int n;
  n = 12; // 12 = 01100
  cout << n << endl;

  n = n >> 1; // 01100 >> 00110 = 6
  n = n >> 2; // 01100 >> 00011 = 3
  cout << n << endl;

  n = n << 1; // 00110 >> 01100 = 12
  cout << n << endl;

  n = n << 1; // 01100 >> 11000 = 24
  cout << n << endl;

  n = n & 1;
  cout << n << endl;
}

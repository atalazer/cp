#include <stdio.h>

/*
  Enumeration
  -> tipe data `int` spesial untuk merepresentasikan kumpulan konstanta
  - Berguna untuk membuat source code menjadi lebih mudah dibaca dan di-maintain
  - Biasanya buat values yang nggak bakal diubah (constants) misalnya seperti hari, bulan, warna, dll.

  Ref: https://www.w3schools.com/c/c_enums.php
*/


enum Level {
  Easy = 10,
  Medium = 25,
  Hard = 50,
  Impossible = 100
};


int main() {

  enum Level soal_1 = Easy;
  enum Level soal_2 = Medium;
  enum Level soal_3 = Easy;
  enum Level soal_4 = Hard;
  enum Level soal_5 = Impossible;

  printf("Kesulitan Soal No.%d : %d\n", 1, soal_1);
  printf("Kesulitan Soal No.%d : %d\n", 2, soal_2);
  printf("Kesulitan Soal No.%d : %d\n", 3, soal_3);
  printf("Kesulitan Soal No.%d : %d\n", 4, soal_4);
  printf("Kesulitan Soal No.%d : %d\n", 5, soal_5);

  return 0;
}

#include "stdio.h"
#include "stdlib.h"
#include "time.h"

// Program buat milih paket soal OSK yang mau dikerjain

int main() {
  // Random seed yang akan diubah setiap 1 hari atau 24 jam
  // srand(time(0) / (60 * 60 * 24));
  srand(time(0));

  // Rentang antara 2007-2018 = 12
  const int MAX_RANGE = 12;

  // Random number generator
  int randomNum = (rand() % MAX_RANGE);

  // paket soal antara 2007-2018
  int paketSoal = 2007 + randomNum;

  // Cetak
  printf("====================================================\n");
  printf("Paket soal OSK hari ini adalah paket soal tahun %d\n", paketSoal);
  printf("====================================================\n");
}

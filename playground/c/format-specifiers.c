#include <stdio.h>

int main() {

  /*
    Format specifiers
    -> mendefinisikan dan mem-format tipe data untuk ditampilkan

    %c  = character
    %s  = string
    %d  = decimal atau integer
    %f  = float
    %lf = double

    ... (https://www.freecodecamp.org/news/format-specifiers-in-c/)

    %._n_ = decimal precision, misalnya `%.1`, `%.2`, dan sebagainya
    %_n_  = minimum field width, misalnya `%1`, `%10`, dan sebagainya
    %-    = left align

  */

  float foo = 3.14;

  printf("Float: %f\n", foo);
  printf("Float: %.2f\n", foo);

  return 0;
}

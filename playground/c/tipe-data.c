#include <stdbool.h>
#include <stdio.h>

int main() {

  // * Char
  char a = 'A';       // Single Char              | %c
  char b[] = "Barra"; // Multiple char or String  | %s

  // * Floating number
  float f = 3.141592; // 4 bytes (32-bit precision) | 6-7 digits  | %f
  double d =
      3.141592653589793; // 8 bytes (64-bit precision) | 15-16 digit | %lf

  // * Boolean
  bool truth = false; // 1 byte (true or false) | %d

  // * Char v2
  // https://www.asciitable.com/
  char char_1 = 99;           // 1 byte (-128 to +127)  | %d or %c
  unsigned char char_2 = 255; // 1 byte (0 to +255)     | %d or %c

  // * Integer
  short s_1;          // 2 bytes | (-32,768 to +32,767) | %d
  unsigned short s_2; // 2 bytes | (0 to +65,535) | %d

  int n_1 = 100;    // 4 bytes | (-2,147,483,648 to +2,147,483,647) | %d
  unsigned int n_2; // 4 bytes | (0 to +4,294,967,295) | %u

  long long ll_1; // 8 bytes | (-9 quintillion to +9 quintillion) | %lld
  unsigned long long ll_2; // 8 bytes | (0 to +18 quintillion) | %llu

  // Output
  printf("a is %c\n", a);
  printf("b is %s\n", b);

  return 0;
}

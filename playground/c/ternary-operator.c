#include <stdio.h>

int main() {
  // Ternary Operator
  // -> If/else statement shortcut
  // format: `(condition) ? value if true : value if false`

  int a, b, max;
  a = 11;
  b = 12;

  max = (a > b) ? a : b;

  printf("Max value: %d\n", max);

  return 0;
}

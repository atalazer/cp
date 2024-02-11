#include <stdio.h>

int main() {

  // TODO: Explain This
  /*
    Adress
    - Value  :
    - Adress :
    - Memory :
  */

  int age = 17;
  printf("Value  of age : %d\n", age);
  printf("Adress of age : %p\n", &age);

  printf("\n");

  char a = 'A', b = 'B', c = 'C', d = 'D';
  printf("Value  : %c\t\t %c\t\t %c\t\t %c\n", a, b, c, d);
  printf("Adress : %p %p %p %p\n", &a, &b, &c, &d);

  return 0;
}

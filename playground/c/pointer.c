
#include <stdio.h>

int main() {

  // TODO: Explain this

  /*
    Pointer
    & -> ???
    * -> ???
  */

  int foo = 123;
  printf("Value  : %d\n", foo);
  printf("Adress : %p\n", &foo);

  // int *pFoo = &foo;
  int *pFoo = NULL;
  pFoo = &foo;

  printf("Value  : %d\n", *pFoo);
  printf("Adress : %p\n", pFoo);

  return 0;
}

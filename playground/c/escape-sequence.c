#include <stdio.h>

int main() {
  /*
    Ref: https://www.geeksforgeeks.org/escape-sequence-in-c/

    Escape Sequence:
    - \n -> New line
    - \t -> Tab
    - \a -> Bell
    - \\ -> Backslash
    - \' -> Single quote
    - \" -> Double quote
  */

  printf("What's up, bro?\n");

  printf("1\t2\t3\n4\t5\t6\n7\t8\t9\n");

  printf("\"Even your shadow will leave you\"\n\t- Don\'t know\n");

  return 0;
}

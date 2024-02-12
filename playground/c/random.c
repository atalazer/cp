#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

  srand(time(0)); // Generate random seed

  int random1 = (rand() % 10) + 1;  // Generate random number from 1-10
  int random2 = (rand() % 100) + 1; // Generate random number from 1-100
  int random3 = (rand() % 2) + 1;   // Generate random number from 1-2

  printf("Random %d : %d\n", 1, random1);
  printf("Random %d : %d\n", 2, random2);
  printf("Random %d : %d\n", 3, random3);

  printf("Generate number from 1 to 10, 5 times!");
  for (int i = 0; i < 5; i++) {
    printf("%d : %d\n", i + 1, (rand() % 10) + 1);
  }

  return 0;
}

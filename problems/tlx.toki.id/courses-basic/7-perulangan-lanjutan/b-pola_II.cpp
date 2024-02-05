#include <cstdio>

int main() {
  int N;
  scanf("%d", &N);
  for (int i = 1; i <= N; i++) {
    for (int j = N; j >= 1; j--) {
      if (j > i) {
        printf(" ");
      } else {
        printf("*");
      }
    }
    printf("\n");
  }
}

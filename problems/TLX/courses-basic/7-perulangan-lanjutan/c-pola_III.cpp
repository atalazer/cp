#include <cstdio>

int main() {
  int N, P;
  scanf("%d", &N);
  P = 0;
  for (int i = 1; i <= N; i++) {
    for (int j = 0; j < i; j++) {
      if (P > 9) {
        P = P % 10;
      }
      printf("%d", P);
      P++;
    }
    printf("\n");
  }
}

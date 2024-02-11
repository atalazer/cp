#include <cstdio>

int balik(int x) {
  int temp = x;
  int ret = 0;

  while (temp > 0) {
    ret = (ret * 10) + (temp % 10);
    temp = temp / 10;
  }
  return ret;
}

int main() {
  int a, b;
  scanf("%d %d", &a, &b);
  int res = balik(balik(a) + balik(b));

  printf("%d\n", res);
}

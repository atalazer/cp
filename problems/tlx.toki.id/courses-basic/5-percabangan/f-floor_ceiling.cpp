#include <cmath>
#include <cstdio>
using namespace std;

float n;
int f, c;

int main() {
  scanf("%f", &n);
  if (trunc(n) == n) {
    c = n;
    f = n;
  } else if (n > 0) {
    f = trunc(n);
    c = f + 1;
  } else if (n < 0) {
    c = trunc(n);
    f = c - 1;
  }
  printf("%d %d\n", f, c);
}

#include <cstdio>
int n;
int main() {
    scanf("%d", &n);
    if (n > 0) {
        printf("positif\n");
    }
    else if (n == 0) {
        printf("nol\n");
    }
    else {
        printf("negatif\n");
    }
}

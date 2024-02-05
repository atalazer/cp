#include <cstdio>
int n;
int main() {
    scanf("%d", &n);
    if (n > 0) {
        if (n < 10) {
            printf("satuan\n");
        } else if (n < 100) {
            printf("puluhan\n");
        } else if (n < 1000) {
            printf("ratusan\n");
        } else if (n < 10000) {
            printf("ribuan\n");
        } else if (n < 100000) {
            printf("puluhribuan\n");
        }
    }
}

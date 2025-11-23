#include <stdio.h>

int trib(int n) {
    if (n == 0) return 0;
    if (n == 1 || n == 2) return 1;

    return trib(n - 1) + trib(n - 2) + trib(n - 3);
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", trib(n));
    return 0;
}

#include <stdio.h>

int climb(int n) {
    
    if (n <= 2)
        return n;

    return climb(n - 1) + climb(n - 2);
}

int main() {
    int n;
    scanf("%d", &n);

    int result = climb(n);
    printf("%d\n", result);

    return 0;
}

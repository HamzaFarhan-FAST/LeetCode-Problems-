#include <stdio.h>

int main() {
    int n;
    printf("Enter n (half the length of array): ");
    scanf("%d", &n);

    int nums[2 * n];
    printf("Enter %d elements: ", 2 * n);
    for (int i = 0; i < 2 * n; i++) {
        scanf("%d", &nums[i]);
    }

    int xval[n], yval[n];

    for (int i = n, j = 0; i < 2 * n; i++, j++) {
        yval[j] = nums[i];
    }

   
    for (int i = 0; i < n; i++) {
        xval[i] = nums[i];
    }

    int xcount = 0, ycount = 0;

    
    for (int i = 0; i < 2 * n; i++) {
        if (i % 2 == 0) {
            nums[i] = xval[xcount];
            xcount++;
        } else {
            nums[i] = yval[ycount];
            ycount++;
        }
    }

    printf("Shuffled array: ");
    for (int i = 0; i < 2 * n; i++) {
        printf("%d ", nums[i]);
    }

    return 0;
}

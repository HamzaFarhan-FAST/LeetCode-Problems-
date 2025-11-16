#include <stdio.h>

int main() {
    int n;

    printf("Enter size of sorted array: ");
    scanf("%d", &n);

    int nums[n];

    printf("Enter %d sorted elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    if (n == 0) {
        printf("k = 0\n");
        return 0;
    }

    int j = 1;  

    for (int i = 1; i < n; i++) {
        if (nums[i] != nums[i - 1]) {
            nums[j] = nums[i];
            j++;
        }
    }

    printf("k = %d\n", j);
    printf("Array after removing duplicates (first k elements): ");

    for (int i = 0; i < j; i++) {
        printf("%d ", nums[i]);
    }

    printf("\n");
    return 0;
}

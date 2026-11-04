#include <stdio.h>

int main(void) {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n <= 0) { printf("Invalid size.\n"); return 0; }

    int arr[n];                 /* VLA – fine in C99 and later */
    int sum = 0;

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("Sum     = %d\n", sum);
    printf("Average = %.2f\n", (float)sum / n);
    return 0;
}
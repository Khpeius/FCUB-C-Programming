#include <stdio.h>

int main(void) {
    int n;
    long long a = 0, b = 1, next;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    if (n <= 0) { printf("Enter a positive number.\n"); return 0; }

    printf("Fibonacci series: ");
    for (int i = 1; i <= n; i++) {
        printf("%lld ", a);
        next = a + b;
        a = b;
        b = next;
    }
    printf("\n");
    return 0;
}
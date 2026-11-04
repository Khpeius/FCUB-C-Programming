#include <stdio.h>

int main(void) {
    int n;
    unsigned long long fact = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial not defined for negative numbers.\n");
        return 0;
    }

    for (int i = 1; i <= n; i++)
        fact *= i;

    printf("Factorial of %d = %llu\n", n, fact);
    return 0;
}
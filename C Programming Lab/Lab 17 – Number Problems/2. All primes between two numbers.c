#include <stdio.h>

int main(void) {
    int low, high, temp;
    printf("Enter two numbers: ");
    scanf("%d %d", &low, &high);

    if (low > high) { temp = low; low = high; high = temp; }

    printf("Prime numbers between %d and %d: ", low, high);
    for (int n = low; n <= high; n++) {
        if (n < 2) continue;
        int isPrime = 1;
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) { isPrime = 0; break; }
        }
        if (isPrime) printf("%d ", n);
    }
    printf("\n");
    return 0;
}
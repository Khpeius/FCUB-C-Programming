#include <stdio.h>

int main(void) {
    int n, sum = 0;
    printf("Enter an integer: ");
    scanf("%d", &n);

    int temp = (n < 0) ? -n : n;

    while (temp != 0) {
        sum += temp % 10;
        temp /= 10;
    }

    printf("Sum of digits = %d\n", sum);
    return 0;
}
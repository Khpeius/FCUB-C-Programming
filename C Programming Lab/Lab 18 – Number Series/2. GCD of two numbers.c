#include <stdio.h>

int main(void) {
    int a, b, x, y, temp;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    x = (a < 0) ? -a : a;
    y = (b < 0) ? -b : b;

    while (y != 0) {          /* Euclidean algorithm */
        temp = y;
        y = x % y;
        x = temp;
    }

    printf("GCD of %d and %d = %d\n", a, b, x);
    return 0;
}
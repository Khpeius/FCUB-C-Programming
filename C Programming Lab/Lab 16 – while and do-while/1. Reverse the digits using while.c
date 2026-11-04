#include <stdio.h>

int main(void) {
    int n, digit, rev = 0;
    printf("Enter an integer: ");
    scanf("%d", &n);

    int temp = (n < 0) ? -n : n;

    while (temp != 0) {
        digit = temp % 10;
        rev = rev * 10 + digit;
        temp /= 10;
    }

    printf("Reversed = %d\n", (n < 0) ? -rev : rev);
    return 0;
}
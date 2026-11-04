#include <stdio.h>

int main(void) {
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n % 2 == 0) printf("%d is Even\n", n);
    if (n % 2 != 0) printf("%d is Odd\n", n);
    return 0;
}
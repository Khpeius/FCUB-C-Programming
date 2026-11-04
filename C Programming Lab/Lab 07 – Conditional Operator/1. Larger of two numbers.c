#include <stdio.h>

int main(void) {
    int a, b, max;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    max = (a > b) ? a : b;
    printf("Larger = %d\n", max);
    return 0;
}
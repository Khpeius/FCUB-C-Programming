#include <stdio.h>

int main(void) {
    int x, y;
    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);

    printf("x > 0 && y > 0 : %d\n", (x > 0 && y > 0));
    printf("x > 0 || y > 0 : %d\n", (x > 0 || y > 0));
    printf("!x             : %d\n", !x);

    printf("x == y : %d\n", x == y);
    printf("x != y : %d\n", x != y);
    printf("x >= y : %d\n", x >= y);
    return 0;
}
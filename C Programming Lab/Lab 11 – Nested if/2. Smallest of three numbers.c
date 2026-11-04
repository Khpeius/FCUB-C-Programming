#include <stdio.h>

int main(void) {
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a <= b) {
        if (a <= c) printf("Smallest = %d\n", a);
        else        printf("Smallest = %d\n", c);
    } else {
        if (b <= c) printf("Smallest = %d\n", b);
        else        printf("Smallest = %d\n", c);
    }
    return 0;
}
#include <stdio.h>

int main(void) {
    int a = 10, b;

    printf("a = %d\n", a);
    printf("a++ (post) gives %d, now a = %d\n", a++, a);
    printf("++a (pre)  gives %d, now a = %d\n", ++a, a);
    printf("a-- (post) gives %d, now a = %d\n", a--, a);
    printf("--a (pre)  gives %d, now a = %d\n", --a, a);

    b = a;
    b += 5;  printf("b += 5  -> %d\n", b);
    b -= 3;  printf("b -= 3  -> %d\n", b);
    b *= 2;  printf("b *= 2  -> %d\n", b);
    b /= 4;  printf("b /= 4  -> %d\n", b);
    b %= 4;  printf("b %%= 4  -> %d\n", b);
    return 0;
}
#include <stdio.h>

int main(void) {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n > 0)  printf("%d is Positive\n", n);
    if (n < 0)  printf("%d is Negative\n", n);
    if (n == 0) printf("%d is Zero\n", n);
    return 0;
}
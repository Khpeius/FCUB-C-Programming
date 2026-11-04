#include <stdio.h>

int main(void) {
    float a, b, c, sum, avg;
    printf("Enter three numbers: ");
    scanf("%f %f %f", &a, &b, &c);

    sum = a + b + c;
    avg = sum / 3.0f;

    printf("Sum     = %.2f\n", sum);
    printf("Average = %.2f\n", avg);
    return 0;
}
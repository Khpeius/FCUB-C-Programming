#include <stdio.h>
#define PI 3.14159

int main(void) {
    float r, area, circumference;
    printf("Enter radius: ");
    scanf("%f", &r);

    area          = PI * r * r;
    circumference = 2 * PI * r;

    printf("Area          = %.2f\n", area);
    printf("Circumference = %.2f\n", circumference);
    return 0;
}
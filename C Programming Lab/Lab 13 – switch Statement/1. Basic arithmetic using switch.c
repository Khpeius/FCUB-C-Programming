#include <stdio.h>

int main(void) {
    double a, b;
    char op;

    printf("Enter expression (e.g. 5 + 3): ");
    scanf("%lf %c %lf", &a, &op, &b);

    switch (op) {
        case '+': printf("%.2lf + %.2lf = %.2lf\n", a, b, a + b); break;
        case '-': printf("%.2lf - %.2lf = %.2lf\n", a, b, a - b); break;
        case '*': printf("%.2lf * %.2lf = %.2lf\n", a, b, a * b); break;
        case '/':
            if (b != 0) printf("%.2lf / %.2lf = %.2lf\n", a, b, a / b);
            else        printf("Division by zero not allowed!\n");
            break;
        default: printf("Invalid operator!\n");
    }
    return 0;
}
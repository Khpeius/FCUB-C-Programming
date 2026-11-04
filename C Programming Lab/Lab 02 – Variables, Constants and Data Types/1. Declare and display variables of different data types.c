#include <stdio.h>

int main(void) {
    int    age     = 21;
    float  height  = 5.9f;
    double salary  = 45000.75;
    char   grade   = 'A';
    const int DAYS = 7;          /* constant */

    printf("Integer : %d\n", age);
    printf("Float   : %.2f\n", height);
    printf("Double  : %.2lf\n", salary);
    printf("Char    : %c\n", grade);
    printf("Const   : %d\n", DAYS);
    return 0;
}
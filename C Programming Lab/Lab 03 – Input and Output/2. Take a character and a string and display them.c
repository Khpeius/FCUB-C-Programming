#include <stdio.h>

int main(void) {
    char ch, str[100];

    printf("Enter a character: ");
    scanf(" %c", &ch);          /* space skips leftover whitespace */
    getchar();                  /* consume the newline */

    printf("Enter a string: ");
    fgets(str, sizeof str, stdin);

    printf("Character : %c\n", ch);
    printf("String    : %s", str);
    return 0;
}
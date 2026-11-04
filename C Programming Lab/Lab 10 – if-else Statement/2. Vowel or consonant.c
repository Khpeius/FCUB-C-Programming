#include <stdio.h>

int main(void) {
    char ch;
    printf("Enter an alphabet: ");
    scanf(" %c", &ch);

    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        char lower = (ch >= 'A' && ch <= 'Z') ? ch + 32 : ch;
        if (lower == 'a' || lower == 'e' || lower == 'i' ||
            lower == 'o' || lower == 'u')
            printf("%c is a Vowel.\n", ch);
        else
            printf("%c is a Consonant.\n", ch);
    } else {
        printf("%c is not an alphabet.\n", ch);
    }
    return 0;
}
#include <stdio.h>

void main() {
    char str[50];
    int i = 0, len = 0, flag = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    while (str[len] != '\0')
        len++;

    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        printf("Palindrome String");
    else
        printf("Not a Palindrome String");
}

#include <stdio.h>

int main() {
    char ch;
    scanf("%c", &ch);
    if (ch >= 'A' && ch <= 'Z') {
        printf("The character '%c' is uppercase.\n", ch);
    }else if (ch >= 'a' && ch <= 'z') {
        printf("The character '%c' is lowercase.\n", ch);
    }    else {
        printf("The character '%c' is not an alphabet.\n", ch);
    }

    return 0;
}

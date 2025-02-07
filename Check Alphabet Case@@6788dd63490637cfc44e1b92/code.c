#include <stdio.h>

int main() {
    char ch;

    // Input character from user
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check if the character is an uppercase letter
    if (ch >= 'A' && ch <= 'Z') {
        printf("The character '%c' is uppercase.\n", ch);
    }
    // Check if the character is a lowercase letter
    else if (ch >= 'a' && ch <= 'z') {
        printf("The character '%c' is lowercase.\n", ch);
    }
    // If not an alphabet character
    else {
        printf("The character '%c' is not an alphabet.\n", ch);
    }

    return 0;
}

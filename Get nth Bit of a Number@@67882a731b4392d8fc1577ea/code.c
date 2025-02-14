#include <stdio.h>

int main() {
    int number, position;

    // Taking input for the number and bit position
    scanf("%d %d", &number, &position);

    // Extracting the nth bit using bitwise AND and right shift
    int bitValue = (number >> position) & 1;

    // Printing the result
    printf("%d\n", bitValue);

    return 0;
}

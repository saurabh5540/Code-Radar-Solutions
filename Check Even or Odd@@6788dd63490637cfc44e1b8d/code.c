#include <stdio.h>

int main() {
    int a, b;

    printf("Enter the first value: ");
    scanf("%d", &a);

    printf("Enter the second value: ");
    scanf("%d", &b);

    if (a > 0 && b > 0) {
        printf("Both values are greater than 0\n");
        if (a % 2 == 0) {
            printf("The first value is even\n");
        } else {
            printf("The first value is odd\n");
        }

        if (b % 2 == 0) {
            printf("The second value is even\n");
        } else {
            printf("The second value is odd\n");
        }
    } else {
        printf("At least one value is less than or equal to 0\n");
    }

    return 0;
}
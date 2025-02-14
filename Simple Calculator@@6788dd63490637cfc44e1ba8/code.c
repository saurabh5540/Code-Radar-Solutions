#include <stdio.h>

int main() {
    int num1, num2;
    char operator;
    
    // Take input
    printf("Enter two integers and an operator (+, -, *, /): ");
    scanf("%d %d %c", &num1, &num2, &operator);
    
    switch (operator) {
        case '+':
            printf("Result: %d\n", num1 + num2);
            break;
        case '-':
            printf("Result: %d\n", num1 - num2);
            break;
        case '*':
            printf("Result: %d\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("Result: %d\n", num1 / num2);
            } else {
                printf("Error: Division by zero!\n");
            }
            break;
        default:
            printf("Error: Invalid operator!\n");
            break;
    }

    return 0;
}

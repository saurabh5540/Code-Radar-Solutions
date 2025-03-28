#include <stdio.h>

void generateFibonacci(int n) {
    if (n <= 0) {
        printf("Invalid input\n");
        return;
    }

    int first = 0, second = 1, next;

    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            printf("%d", first);
        } else if (i == 2) {
            printf(" %d", second);
        } else {
            next = first + second;
            printf(" %d", next);
            first = second;
            second = next;
        }
    }
    printf("\n");
}

int main() {
    int n;
    scanf("%d", &n); // Read the number of terms
    generateFibonacci(n);
    return 0;
}
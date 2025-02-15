#include <stdio.h>
int main() {
    int n;
    
    // Taking input for N
    scanf("%d", &n);

    // Loop to print numbers from 1 to N
    for (int i = 1; i <= n; i++) {
        printf("%d", i);
        if (i < n) {
            printf(" "); // Print space between numbers
        }
    }

    printf("\n"); // Newline after printing all numbers
    return 0;
}

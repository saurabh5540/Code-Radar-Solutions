#include <stdio.h>

int main() {
    int N;
    
    // Taking input for N
    scanf("%d", &N);

    // Loop to print numbers from 1 to N
    for (int i = 1; i <= N; i++) {
        printf("%d", i);
        if (i < N) {
            printf(" "); // Print space between numbers
        }
    }

    printf("\n"); // Newline after printing all numbers
    return 0;
}

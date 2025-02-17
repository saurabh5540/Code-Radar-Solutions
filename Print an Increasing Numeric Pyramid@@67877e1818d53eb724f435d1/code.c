#include <stdio.h>

int main() {
    int N;

    
    scanf("%d", &N);

    // Loop to print the pyramid
    for (int i = 1; i <= N; i++) {
        // Print spaces for alignment
        for (int j = 1; j <= N - i; j++) {
            printf(" ");
        }
        // Print numbers in increasing order
        for (int k = 1; k <= i; k++) {
            printf("%d ", k);
        }
        // Move to the next line
        printf("\n");
    }

    return 0;
}
 #include <stdio.h>

int main() {
    int N;

    // Input the number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &N);

    // Loop to print the mirrored right-angled triangle
    for (int i = 1; i <= N; i++) {
        // Print spaces
        for (int j = 1; j <= N - i; j++) {
            printf(" ");
        }
        // Print stars
        for (int k = 1; k <= i; k++) {
            printf("*");
        }
        // Move to the next line
        printf("\n");
    }

    return 0;
}
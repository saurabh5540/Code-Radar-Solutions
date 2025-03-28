#include <stdio.h>

// Function to calculate factorial of a number
long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    long long result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

// Function to print factorials in the range [start, end]
void factorialRange(int start, int end) {
    if (start < 0 || end < 0 || start > end) {
        printf("Invalid range\n");
        return;
    }
    for (int i = start; i <= end; i++) {
        printf("%lld\n", factorial(i));
    }
}

int main() {
    int start, end;
    
    // Read the start and end of the range
    scanf("%d %d", &start, &end);
    
    // Call the factorialRange function
    factorialRange(start, end);
    
    return 0;
}
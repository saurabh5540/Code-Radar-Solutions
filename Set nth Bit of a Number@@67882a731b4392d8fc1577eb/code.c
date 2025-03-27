#include <stdio.h>

int set_nth_bit(int num, int n) {
    return num | (1 << n);
}

int main() {
    int num, n;
    scanf("%d %d", &num, &n);  // Read the number and bit position
    
    int result = set_nth_bit(num, n);
    printf("%d\n", result);
    
    return 0;
}
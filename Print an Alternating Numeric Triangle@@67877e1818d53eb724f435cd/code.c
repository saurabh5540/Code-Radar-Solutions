#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);  
    
    for (int i = 1; i <= N; i++) {
        int num = i % 2;  
        for (int j = 1; j <= i; j++) {
            printf("%d", num);
            if (j < i) {
                printf(" ");
            }
            num = !num; 
        }
        printf("\n");
    }
    
    return 0;
}
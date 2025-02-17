#include <stdio.h>
int main() {
    int a;
    scanf("%d", &a);
    for (int i = 1; i <= a; i++) {
        printf("%d",i);
        if (i < a) {
            printf(" "); 
        }
    }

    printf("%d\n");
    return 0;
}

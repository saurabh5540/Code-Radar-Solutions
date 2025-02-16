#include <stdio.h>
int main() {
    int a;
    scanf("%d", &a);
    if(a<=0){
        return 1;
    }
    for (int i = 1; i <= a; i++) {
        printf("%d",i);
        if (i < a) {
            printf(" "); 
        }
    }

    printf("\n");
    return 0;
}

#include <stdio.h>
int main(){
    int a;
    int sum;
    scanf("%d", &a);
    for(int i = 1; i<=a; i++){
        sum+=i;
    }
    printf("%d\n", sum);
    return 0;
}
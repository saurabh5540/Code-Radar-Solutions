#include <stdio.h>
int main(){
    int num;
    printf("Enter the integer:");
    scanf("%d", &num);
    printf("Hexadecimal: %X", num);
    printf("Octal: %o", num);

    return 0;
}
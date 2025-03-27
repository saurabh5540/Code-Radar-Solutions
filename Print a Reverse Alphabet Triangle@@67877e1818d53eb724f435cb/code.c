#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for(int i = 1; i>=1; i--){
        char current_char = 'A';
        for(int j = 1; j<=i; j++){
            printf("%c", current_char);
            if(j<i){
                printf(" ");
            }
            current_char++;
        }
        printf("/n");
    }
    return 0;
}
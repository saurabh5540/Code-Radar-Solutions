#include <stdio.h>
int isPrime(int num){
     if (num <= 1) {
        return 0; 
    }
    if (num == 2) {
        return 1; 
    }
    if (num % 2 == 0) {
        return 0; 
    }
    for (int i = 3; i * i <= num; i += 2) {
        if (num % i == 0) {
            return 0; 
        }
    }
    return 1; 
}
int main( ){
    int n;
    scanf("%d", &n);
    while(n--){
        int num;
        scanf("%d", &num);
        printf("%d\n", isPrime(num));
    }
    return 0;
}
#include <stdio.h>

int main(){
    int n , rem = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    while(n > 0){
        rem = n  % 10;
        n = n / 10;

        printf("%d",rem);
    }n++;

    return 0;
    
}
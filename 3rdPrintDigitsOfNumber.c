#include <stdio.h>

int main(){

    int n = 0;
    int rem;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(n != 0){
     rem = n % 10;
     n = n / 10;
     printf(" %d ", rem);
    }

    return 0;

}
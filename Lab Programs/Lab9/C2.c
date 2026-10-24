#include <stdio.h>

int main(){

    int n , newN = 0;
    int rem = 0 , remN = 0;

    printf("Conversion of Decimal into Binary\n");

    printf("Enter n: ");
    scanf("%d", &n);

    while(n > 0){
        rem = n % 2;
        n = n / 2;

        // printf("%d", rem);

        newN = (newN * 10) + rem;
    }

    while(newN > 0){
        remN = newN % 10;
        newN = newN / 10;

        printf("%d",remN);
    }

    return 0;
}
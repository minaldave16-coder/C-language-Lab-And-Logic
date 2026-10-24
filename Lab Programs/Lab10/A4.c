#include <stdio.h>

int main(){

    int n , rem , newN = 0 , remN , temp;

    printf("Enter n: ");
    scanf("%d", &n);

    while(n > 0){
        rem = n % 10;      
        n = n / 10;

        newN = (newN * 10) + rem;
    }

    while(newN > 0){
        remN = newN % 10;
        newN = newN / 10;

        printf("%d  ", remN);
    }

    return 0;
    
}
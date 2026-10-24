#include <stdio.h>

int main(){

    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    double e = 1 , fact = 1;

    for(int i = 1 ; i <= n ; i++){
        fact = fact*i;
        e = e + (1/fact);
    }
    printf("The estimated value of 'e' is : %lf",e);

    return 0;
}
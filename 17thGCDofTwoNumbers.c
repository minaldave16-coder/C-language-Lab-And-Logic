#include <stdio.h>
#include <math.h>

int main (){

    int n1;
    int n2;
    int min = 0;
    int gcd = 0;

    printf("Enter n1: ");
    scanf("%d", &n1);

    printf("Enter n2: ");
    scanf("%d", &n2);

    if(n1 < n2){
        min = n1;
    }
    else{
        min = n2;
    }

    for(int i = 1; i <= min; i++){
        if(n1 % i == 0 && n2 % i == 0){
            gcd = i;
        }
    }

    printf("GCD of these numbers is: %d",gcd);
    return 0;
}
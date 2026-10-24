#include <stdio.h>

int main(){

    int n;
    int rem = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    int min = n % 10;

    while(n != 0){
        rem = n % 10;
        if(min > rem){
            min = rem;
        }
        n = n / 10;
    }

    printf("The value of minimum from all digits of n is: %d",min);

    return 0;
}
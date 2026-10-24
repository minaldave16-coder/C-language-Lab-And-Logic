#include <stdio.h>
#include <math.h>

int main(){

    int n;
    int sum = 0;
    int rem = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    while(n != 0){
        rem = n % 10;
    
    if(rem % 2 != 0){
        sum = sum + rem;
    }
    n = n / 10;
    }

    printf("The sum is: %d",sum);

    return 0;
}
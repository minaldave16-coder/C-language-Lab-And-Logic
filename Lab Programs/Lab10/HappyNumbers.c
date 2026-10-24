#include <stdio.h>

int main(){

    int n , temp , r = 0 , sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    while(n != 1 && n != 4){
        sum =0;
        while(n > 0){
            r = n % 10;
            sum = sum + (r*r);
            n = n / 10;
        }
        n = sum;
        printf("Sum = %d\n", sum);
    }


    if(sum == 1){
        printf("It is a happy number");
    }
    else if(sum == 4){
        printf("It is a blackhole number");
    }
    else {
        printf("It can never be a happy number");
    }

    return 0;
}
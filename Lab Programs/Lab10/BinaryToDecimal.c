#include <stdio.h>
#include <math.h>

int main(){

    int n , rem = 0 , count = 0 , k , i = 0 , sum = 0;

    printf("Enter a binary number: ");
    scanf("%d", &n);

    while(n > 0){
        rem = n % 10;
        n = n / 10;
        count = count + 1;
        while(i <= count){
            k = rem * pow(2 , count - 1);
            sum = sum + k;
            i++;
        }
    }

    printf("The converted value of binary in decimal is: %d", sum);

    return 0;
}
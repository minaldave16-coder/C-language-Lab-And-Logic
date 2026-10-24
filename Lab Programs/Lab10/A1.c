#include <stdio.h>

int main(){

    int n , sum = 0 , rem1 = 0 , rem2 = 0 , temp;

    printf("Enter n: ");
    scanf("%d", &n);

    temp = n;

    rem1 = n % 10;

    while(temp > 0){
        rem2 = temp % 10;
        temp = temp / 10;
    }
    sum = rem1 + rem2;

    printf("The sum of first and last digit is: %d",sum);
    
    return 0;
}
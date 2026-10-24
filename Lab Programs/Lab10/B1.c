#include <stdio.h>

int main(){

    //Check Perfect number:      perfect number = sum of factors is equal to the the given number itself
    
    int n , sum = 0 , i = 1;

    printf("Enter n: ");
    scanf("%d", &n);

    while(i < n){
        if(n % i == 0){
            sum = sum + i;
        }i++;
    }
    if(sum == n){
        printf("The given number is a perfect number.");
    }
    
    else{
        printf("The given number is not a perfect number.");
    }

    return 0;
}
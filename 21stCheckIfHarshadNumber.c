#include <stdio.h>

int main(){

    int n;
    int rem = 0;
    int sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);
    int temp = n;

    while(n != 0){
        rem = n % 10;
        sum = sum + rem;
        n = n / 10;
    }

    if(temp % sum == 0){
        printf("It's a Harshad Number.");
    }
    else{
        printf("It's not a Harshad Number.");
    }
}
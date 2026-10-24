#include <stdio.h>

int main(){
    int n = 0;
    int sum = 0;
    int rem;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(n != 0){
        rem = n % 10;
        sum = sum + rem;
        n = n / 10;
    }
    printf("The sum is : %d",sum);
    
    return 0;
}
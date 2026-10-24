#include <stdio.h>

int main(){

    int n , rem;
    int newN = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    int num = n;

    while(n > 0){
        rem = n % 10;
        newN = (newN * 10) + rem;
        n = n / 10;
    }
    printf("%d\n", newN);

    if(newN == num){
        printf("This is a palindrome number\n");
    }
    else{
        printf("This is not a palindrome number\n");
    }

    return 0;
}
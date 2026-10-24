#include <stdio.h>

int main(){

    int a , b , c , result;

    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter b: ");
    scanf("%d", &b);

    printf("Enter c: ");
    scanf("%d", &c);

    result = (a > b) ? (a * c) : (b * c);
    printf("The value of the result is : %d",result);
}
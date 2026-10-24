#include <stdio.h>
#include <math.h>

int main(){

    int a;
    int b;
    int sum = 0;

    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter b: ");
    scanf("%d", &b);

    sum = a + b;

    printf("The sum is: %d",sum);

    return 0;
}
#include <stdio.h>
#include <math.h>

int main(){

    int a;
    int b;
    int c , max;

    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter b: ");
    scanf("%d", &b);

    printf("Enter c: ");
    scanf("%d", &c);

    max = (a > b) ? ((a > c) ? (a) : (c)) : ((b > c) ? (b) : (c));
    printf("The value of max is : %d",max);

    return 0;
}
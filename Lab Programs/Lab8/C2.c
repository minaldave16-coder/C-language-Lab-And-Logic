#include <stdio.h>

int main(){

    int n , sum;
    //The sum of squares of first n digits...user enters n.

    printf("Enter n: ");
    scanf("%d", &n);

    sum = (n * (n + 1) * ((2 * n) + 1)) / 6;

    printf("the sum of squares of first %d is : %d\n", n , sum);

    return 0;
}
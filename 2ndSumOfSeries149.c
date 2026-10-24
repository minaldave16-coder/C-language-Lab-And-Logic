#include <stdio.h>
#include <math.h>

int main(){

    int n = 0;
    int sum = 0;

    printf("Add the number till which you wanna count their sum of their squares: ");
    scanf("%d", &n);

    for( int i = 1; i <= n; i++){
        sum = sum + i * i;
    }

    printf("The sum of the function is: %d\n", sum);

    return 0;
}
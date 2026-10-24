#include <stdio.h>
#include <math.h>

int main(){

    int a;
    int b;
    int c;
    int sum = 0;
    int avg = 1;

    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter b: ");
    scanf("%d", &b);

    printf("Enter c: ");
    scanf("%d", &c);

    sum = a + b + c;

    printf("The sum of three numbers is: %d\n",sum);

    avg = sum / 3;
    printf("Avg of these three numbers is: %d\n",avg);

    return 0;
}
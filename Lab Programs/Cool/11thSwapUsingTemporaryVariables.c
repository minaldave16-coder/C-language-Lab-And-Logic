#include <stdio.h>

int main(){

    float a;
    float b;
    float temp;

    printf("Enter a: ");
    scanf("%f", &a);

    printf("Enter b: ");
    scanf("%f", &b);

    temp = a;
    a = b;
    b = temp;

    printf("a : %f\n",a);
    printf("b : %f\n",b);

    return 0;
}
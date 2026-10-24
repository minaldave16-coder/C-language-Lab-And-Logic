#include <stdio.h>
#include <math.h>

int main(){

    int a;
    int b;

    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter b: ");
    scanf("%d", &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("a: %d\n",a);
    printf("b: %d\n",b);

    return 0;
}
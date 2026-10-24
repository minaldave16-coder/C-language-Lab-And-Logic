#include <stdio.h>
#include <math.h>

int main(){

    int r;
    double area;
    #define PI 3.1459

    printf("Enter r: ");
    scanf("%d", &r);

    area = PI * r * r;

    printf("The area is: %lf",area);

    return 0;
}
#include <stdio.h>
#include <math.h>

int main(){

    int height;
    int base;
    double area;

    printf("Enter height: ");
    scanf("%d", &height);

    printf("Enter base: ");
    scanf("%d", &base);

    area = height * base / 2;

    printf("The area is: %lf",area);

    return 0;
}
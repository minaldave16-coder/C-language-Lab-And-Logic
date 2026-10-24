#include <stdio.h>
#include <math.h>

int main(){

    double feet;
    double cm;

    printf("Enter the length in feet: ");
    scanf("%lf", &feet);

    cm = feet * 30;

    printf("The length converted from feet into inches is: %lf", cm);

    return 0;
}
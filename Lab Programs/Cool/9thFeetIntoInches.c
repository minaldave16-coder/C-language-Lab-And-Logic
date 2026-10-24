#include <stdio.h>
#include <math.h>

int main(){

    double feet;
    double inches;

    printf("Enter the length in feet: ");
    scanf("%lf", &feet);

    inches = feet * 12;

    printf("The length converted from feet into inches is: %lf", inches);

    return 0;
}
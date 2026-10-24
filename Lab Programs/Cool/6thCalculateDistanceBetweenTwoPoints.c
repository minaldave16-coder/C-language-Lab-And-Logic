#include <stdio.h>
#include <math.h>

int main(){

    double point_A;
    double point_B;
    double distance;

    printf("Enter point_A: ");
    scanf("%lf", &point_A);

    printf("Enter point_B: ");
    scanf("%lf", &point_B);

    distance = point_A - point_B;

    printf("The distance between the two points is: %lf", distance);

    return 0;
}
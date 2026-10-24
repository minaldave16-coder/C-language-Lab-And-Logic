#include <stdio.h>
#include <math.h>

int main(){

    double farenheit;
    double celcius;

    printf("Enter farenheit: ");
    scanf("%lf", &farenheit);

    celcius = (farenheit - 32) * 5 / 9;

    printf("The calculated value of temprature in celcius is: %lf",celcius);

    return 0;
}
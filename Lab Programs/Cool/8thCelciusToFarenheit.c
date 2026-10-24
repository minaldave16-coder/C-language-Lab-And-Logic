#include <stdio.h>
#include <math.h>

int main(){

    double farenheit;
    double celcius;

    printf("Enter celcius: ");
    scanf("%lf", &celcius);

    farenheit = (celcius * 9 / 5) + 32;

    printf("The calculated value of temprature farenheit is: %lf",farenheit);

    return 0;
}
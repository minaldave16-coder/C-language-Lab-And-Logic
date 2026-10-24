#include <stdio.h>
#include <math.h>

int main(){

    float a , b , c;
    float discriminant = 0;
    float x1 , x2;

    printf("Enter a: ");
    scanf("%f", &a);

    printf("Enter b: ");
    scanf("%f", &b);

    printf("Enter c: ");
    scanf("%f", &c);

    printf("The quadratic equation is %0.2fx^2 + %0.2fx + %0.2f\n",a, b, c);

    discriminant = pow(b , 2) - 4*a*c;

    if(discriminant > 0){
        printf("Equation has two real roots\n");
        x1 = (-b + sqrt(discriminant))/2*a;
        x2 = (-b - sqrt(discriminant))/2*a;
        printf("The values of x is %0.2f and ", x1);
        printf("%0.2f\n", x2);
    }
    else if(discriminant == 0){
        printf("The eqation has real and equal roots\n");
        x1 = -b / 2*a;
        x2 = -b / 2*a;
         printf("The values of x is %0.2f and ", x1);
        printf("%0.2f\n", x2);
    }
    else{
        printf("The equation has no real roots.\n");
    }

    return 0;
}



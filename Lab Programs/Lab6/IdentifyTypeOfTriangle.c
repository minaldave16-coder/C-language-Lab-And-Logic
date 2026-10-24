#include <stdio.h>
#include <math.h>

int main(){

    float a , b , c;

    printf("Lets say that a , b , c are the sides of triangle...enter yourd values of a , b , &c to know the type of triangle we are talking about\n");

    printf("Enter a: ");
    scanf("%f", &a);

    printf("Enter b: ");
    scanf("%f", &b);

    printf("Enter c: ");
    scanf("%f", &c);

    if(a == b && b == c){
        printf("It is an equilateral triangle");
    }
    else if(a + b == c || b + c == a || c + a == b){
        printf("It is not a triangle");
    }
    else if(a == b || b == c || a == c){
        printf("It is an isosceles triangle");
    }
    else  if(pow(a , 2) + pow(b , 2) == pow(c , 2)){
        printf("It is a right angled triangle.");
    }
    else if(a != b && b != c && a != c){
        printf("It is a scalene triangle");
    }
    else{
        printf("It isn't even a triangle");
    }

    return 0;
}

#include <stdio.h>
float num(float a1 , float b1 , float c1);
int main(){

    float a , b , c;
    printf("Enter a,b,c: ");
    scanf("%f %f %f",&a , &b ,&c);

    float result = num(a , b , c);
    printf("%f", result);
}
float num(float a1 , float b1 , float c1){
    return ((a1 > b1)?((a1 > c1)?(a1):(c1)):((b1>c1)?(b1):(c1)));
}
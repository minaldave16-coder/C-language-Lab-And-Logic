#include <stdio.h>
float si(int p1 ,float r1 ,int t1);

int main(){

    int p , t;
    float r;
    printf("Enter amout , rate and time: ");
    scanf("%d %f %d", &p , &r , &t);

    float interest = si(p , r, t);
    printf("%f", interest);
    return 0;
}

float si(int p1 , float r1 , int t1){
    return ((p1*r1*t1)/100);
}
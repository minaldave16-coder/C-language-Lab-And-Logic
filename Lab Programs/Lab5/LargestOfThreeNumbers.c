#include <stdio.h>
#include <math.h>

int main(){

    int a;
    int b;
    int c;

    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter b: ");
    scanf("%d", &b);

    printf("Enter c: ");
    scanf("%d", &c);

    if(b > c && c > a){
        printf("b is the largest.");
    }
    if(b > c && b < a){
        printf("a is the largest.");
    }
    if(b < c && c > a){
        printf("c is the largest");
    }

    return 0;
}
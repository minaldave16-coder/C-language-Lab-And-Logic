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

    if(b < c && b < a){
        printf("b is the smallest.");
    }
    if(b > c && b < a){
        printf("c is the smallest.");
    }
    if(b < c && c > a){
        printf("a is the smallest");
    }

    return 0;
}
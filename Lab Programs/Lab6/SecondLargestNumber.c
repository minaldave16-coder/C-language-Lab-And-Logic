#include <stdio.h>

int main(){

    int a , b , c;

    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter b: ");
    scanf("%d", &b);

    printf("Enter c: ");
    scanf("%d", &c);

    if((a > b && a < c) || (a > c && a < b)){
        printf("B is the second largest number");
    }
    else if((b > a && b < c) || (b > c && b < a)){
        printf("A is the second largest number");
    }
    else if((c > a && c < b) || (c > b && c < a)){
        printf("C is the second largest number");
    }

    return 0;
}
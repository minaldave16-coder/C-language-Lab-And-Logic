#include <stdio.h>

int main(){
    int a , b;
    int count = 0;

    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter b: ");
    scanf("%d", &b);

    while(a > b){
        a = a - b;
    
    }
    printf("The value of remainder is %d", a);

    return 0;
}
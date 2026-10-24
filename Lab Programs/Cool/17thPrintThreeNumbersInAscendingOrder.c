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

    if(a > b){
        if(b > c){
            printf("%d > %d > %d", a , b , c);
        }
        else{
            if(c > a){
                printf("%d > %d > %d", c , a , b);
            }
            else{
                printf("%d > %d > %d", a , c , b);
            }
        }
    }
    else{
        if(c > a){
            if(b > c){
                printf("%d > %d > %d", c , b , a);
            }
            else{
                printf("%d > %d > %d", b , c , a);
            }
        }
        else{
            printf("%d > %d > %d", b , a , c);
        }
    }

    return 0;
}
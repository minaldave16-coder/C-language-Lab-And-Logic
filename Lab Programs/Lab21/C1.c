#include <stdio.h>
struct dist{
    int f;
    int i;
};

int main(){
    struct dist d1 , d2 , d3;

     printf("Enter dist 1: ");
    scanf("%d %d", &d1.f , &d1.i);

    printf("Enter dist 2: ");
    scanf("%d %d", &d2.f , &d2.i);

    d3.i = d2.i + d1.i;
    d3.f = d2.f + d1.f;

    if(d3.i >= 12){
        d3.i = d3.i - 12;
        d3.f++;
    }

    printf("%d'%d", d3.f , d3.i);
    return 0;
}
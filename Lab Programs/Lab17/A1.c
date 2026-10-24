#include <stdio.h>

int main(){

    int a = 5;
    int *p;
    p = &a;

    printf("%d  %d", p , *p);
    return 0;
}
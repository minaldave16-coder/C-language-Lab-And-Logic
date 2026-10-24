#include <stdio.h>

int main(){

    int a = 5 , b = 6;

    int *p , *q;
    p=&a;
    q=&b;
    *p=*p+*q;
    *q=*p-*q;
    *p=*p-*q;
    printf("%d %d",a,b);
    return 0;
}
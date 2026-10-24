#include <stdio.h>

int main(){

    int a=5;
    char b='A';
    float c=2.0;
    double d=3.0;

    int *p;
    char *q;
    float *r;
    double *s;

    p = &a;
    q = &b;
    r = &c;
    s = &d;

    printf("%d %d\n", p , a);
    printf("%d %c\n", q , b);
    printf("%d %f\n", r , c);
    printf("%d %lf\n", s , d);

    return 0;
}
#include <stdio.h>
int main(){

    int n = 123456789;
    int newN = 100000000;
    int r = n % newN;
    printf("%d", r);

    return 0;
}
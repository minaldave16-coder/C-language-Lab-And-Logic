#include <stdio.h>
int add(int a , int b);

int main(){

    int a1 = 3 , b1 = 9;

    int result = add(a1 , b1);
    printf("%d", result);
}

int add(int a , int b){

    return (a + b);
}
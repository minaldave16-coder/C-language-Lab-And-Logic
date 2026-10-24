#include <stdio.h>

int main(){

    int n , result;

    printf("Enter n: ");
    scanf("%d", &n);

    result = (n%2 == 0) ? (printf("n is even")) : (printf("n is odd"));

    return 0;

}
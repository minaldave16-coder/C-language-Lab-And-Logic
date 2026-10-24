#include <stdio.h>

int main(){

    int n , m , r = 1;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter m: ");
    scanf("%d", &m);

    for(int i = 0 ; i < m ; i++){
        int product = 0;

        for(int j = 0 ; j < n ; j++){
            product = product + r;
        }

        r = product;
    }
    printf("%d ^ %d = %d", n , m , r);

    return 0;
}
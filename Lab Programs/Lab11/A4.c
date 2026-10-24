#include <stdio.h>

int main(){
    int x , y , n = 1;

    printf("Enter x: ");
    scanf("%d", &x);

    printf("Enter y: ");
    scanf("%d", &y);

    for(int i = 0 ; i < y ; i++){
        n = x * n;
    }
    printf("%d", n);
    return 0;
}
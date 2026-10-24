#include <stdio.h>

int main(){
    int n , result;

    printf("Enter n: ");
    scanf("%d", &n);

    for(int i = 1 ; i <= 10 ; i++){
        result = n * i;
        printf("%d * %d = %d\n", n , i , result);
    }
    return 0;
}
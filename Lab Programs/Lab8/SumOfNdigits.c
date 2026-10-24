#include <stdio.h>

int main(){
    int i = 1;
    int n , sum;

    printf("Enter n: ");
    scanf("%d", &n);

    for(int i = 1; i < n; i++){
        sum = (n * (n + 1))/2;
    }

    printf("The sum is %d", sum);

    return 0;
}
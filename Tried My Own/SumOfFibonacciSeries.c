#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int n;
    int sum = 0;
    int a = 0;
    int b = 1;
    int temp = 0;

    printf("Enter n: ");
    scanf("%d", &n);


    for(int i = 0; i < n ; i++){
        sum = sum + a;
        temp = a + b;
        a = b;
        b = temp;
    }

    printf("The value of sum is: %d",sum);

    return 0;
}
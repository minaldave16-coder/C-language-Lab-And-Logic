#include <stdio.h>
#include <math.h>

int main(){

    int n;
    int count = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        if(n % i == 0){
            count = count + 1;
        }
    }

    printf("The count of factors is: %d",count);

    return 0;
}
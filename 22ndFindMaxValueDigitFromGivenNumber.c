#include <stdio.h>
#include <stdio.h>

int main(){

    int n;
    int max = 0;
    int rem;

    printf("Enter n: ");
    scanf("%d", &n);

    while(n != 0){
        rem = n % 10;
        if(max < rem){
            max = rem;
        }
        n = n / 10;
    }

    printf("The value of max is : %d",max);

    return 0;
}
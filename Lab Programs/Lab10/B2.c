#include <stdio.h>

int main(){

    int n , i = 2;
    int flag = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    while(i < n){
        if (n % i == 0)
        {
           flag=1;
           break;
        }i++;
    }
    if(flag){
        printf("Not a Prime number");
    }
    else{
        printf("A Prime number");
    }

    return 0;
}
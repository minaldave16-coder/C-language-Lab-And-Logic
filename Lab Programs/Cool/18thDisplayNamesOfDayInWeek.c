#include <stdio.h>

int main(){

    int n;

    printf("Enter a number(0 - 6): ");
    scanf("%d", &n);

    if(n == 0){
        printf("It is Sunday!");
    }
    else if(n == 1){
        printf("It is Monday!");
    }
    else if(n == 2){
        printf("It is Tuesday!");
    }
    else if(n == 3){
        printf("It is Wednesday!");
    }
    else if(n == 4){
        printf("It is Thursday!");
    }
    else if(n == 5){
        printf("It is Friday!");
    }
    else if(n == 6){
        printf("It is Saturday!");
    }
    else{
        printf("Invalid Input!!!");
    }
}
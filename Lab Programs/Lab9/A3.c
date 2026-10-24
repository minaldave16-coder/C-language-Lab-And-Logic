#include <stdio.h>

int main(){
    int x;
    int y;
    int multi = 1 , i = 1;

    printf("Enter x: ");
    scanf("%d", &x);

    printf("Enter y: ");
    scanf("%d", &y);

    while(i <= y){
        multi = x * multi; 
        i++;
    }
    printf("The answer to this question is: %d",multi);

    return 0;
}
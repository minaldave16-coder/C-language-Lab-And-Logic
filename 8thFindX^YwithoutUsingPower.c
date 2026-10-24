#include <stdio.h>
#include <math.h>

int main(){
    int x;
    int y;
    int multi = 1;

    printf("Enter x: ");
    scanf("%d", &x);

    printf("Enter y: ");
    scanf("%d", &y);

    for(int i = 1; i <= y; i++){
        multi = x * multi; 
    }
    printf("The answer to this question is: %d",multi);

    return 0;
}
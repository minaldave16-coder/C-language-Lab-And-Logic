#include <stdio.h>
#include <math.h>

int main(){

    int x;
    int y;
    int max = 0;
    int lcm = 0;

    printf("Enter x: ");
    scanf("%d", &x);

    printf("Enter y: ");
    scanf("%d", &y);

    if(x < y){
        max = y;
    }
    else{
        max = x;
    }

    for(int i = max; i <= x * y; i++){
        if(i % x == 0 && i % y == 0){
            lcm = i;
            break;
        }
    }

    printf("lcm of numbers is: %d",lcm);
    return 0;
}
#include <stdio.h>
#include <math.h>

int main (){

    int n1;
    int n2;
    int min;

    printf("Enter n1: ");
    scanf("%d", &n1);

    printf("Enter n2: ");
    scanf("%d", &n2);

    if(n1 < n2){
        min = n1;
    }
    else{
        min = n2;
    }

    printf("min: %d",min);

    return 0;
}
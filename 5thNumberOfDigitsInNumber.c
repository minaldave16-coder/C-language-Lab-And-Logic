#include <stdio.h>

int main(){

    int n = 0;
    int count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(n != 0){
        n = n / 10;
        count = count + 1;
    }

    printf("The number of digits is: %d",count);


    return 0;
}//if i add display than 10digits the output they display is not a correct one.
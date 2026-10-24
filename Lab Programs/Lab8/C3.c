#include <stdio.h>

int main(){

    int n1 , n2 , count = 0 , rem;

    printf("Enter n1: ");
    scanf("%d", &n1);

    printf("Enter n2: ");
    scanf("%d", &n2);

    while(n1 - n2 >= 0){
        n1 = n1 - n2;
        count = count + 1;
    }

    printf("The value of quotient is : %d\n",count);

    rem = n1 % n2;

    printf("The value of remainder is: %d\n", rem);

    return 0;
}
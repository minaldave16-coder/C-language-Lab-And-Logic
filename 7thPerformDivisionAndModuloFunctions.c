#include <stdio.h>
#include <math.h>

int main(){
    int n1;
    int n2;
    int count = 0;

    printf("Enter n1: ");
    scanf("%d", &n1);

    printf("Enter n2: ");
    scanf("%d", &n2);

    while(n1 - n2 > 0){
        n1 = n1 - n2;
        count = count + 1;
    }

    printf("The anwer of the modulo/remainder operator is: %d\n",n1);

    printf("The count/quotient of the following operations are like : %d\n",count);

    return 0;
}
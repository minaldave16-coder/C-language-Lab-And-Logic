#include <stdio.h>
#include <math.h>

int main(){

    int unit;
    float amount;
    float f_amount;

    printf("Enter the number of units used by the user: ");
    scanf("%d", &unit);

    if(unit <= 50){
        amount = unit * 0.5;
    }
    else{
        if(unit <= 150){
            amount = 25 + (unit - 50) * 0.75;
        }
        else{
            if(unit <= 250){
                amount = 25 + 75 + (unit - 150) * 1.20;
            }
            else{
                amount = 220 + (unit-250) * 1.50;
            }
        }
    }

    f_amount = amount + amount * 0.2;

    printf("The amonut required to be paid is: %f",f_amount);

    return 0;
}
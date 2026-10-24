#include <stdio.h>

int main(){

    float salary;
    float gross;

    printf("Enter salary: ");
    scanf("%f", &salary);

    if(salary >= 10000){
        gross = (0.2)*salary + (0.8)*salary;
        if(salary >= 20000){
            gross = (0.25)*salary + (0.9)*salary;
            if(salary >= 30000){
                gross = (0.3)*salary + (0.95)*salary;
            }
        }
    }
    printf("The gross salary oof the user is: %f",gross);

    return 0;
}
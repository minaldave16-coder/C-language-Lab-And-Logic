#include <stdio.h>
#include <math.h>

int main(){

    int principal_amount;
    double rate_of_interest;
    int time_period;
    double simple_interest;

    printf("Enter principal_amount: ");
    scanf("%d", &principal_amount);

    printf("Enter rate_of_interest: ");
    scanf("%lf", &rate_of_interest);

    printf("Enter time_period: ");
    scanf("%d", &time_period);

    simple_interest = principal_amount * rate_of_interest * time_period / 100 ;

    printf("The simple interest calculated on the given amount will be represented as: %lf in %d years",simple_interest , time_period);

    return 0;
}
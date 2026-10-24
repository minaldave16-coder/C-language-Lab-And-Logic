#include <stdio.h>
#include <math.h>

int main(){

    int year;

    printf("Enter a year to know if it was a leap year: ");
    scanf("%d", &year);

    if(year % 4 == 0){
        if(year % 100 == 0){
            if(year % 400 == 0){
                printf("It's a leap year.");
            }
            else{
                printf("It's not a leap year: ");
            }
        }
        else{
            printf("It's a leap year.");
        }
    }
    else{
        printf("It's not a leap year.");
    }

    return 0;
    
}
#include <stdio.h>
#include <math.h>

int main(){

    int c_day;
    int c_month;
    int c_year;
    int b_day;
    int b_month;
    int b_year;
    int b_date;
    int age;

    printf("Enter b_day: ");
    scanf("%d", &b_day);

    printf("Enter c_day: ");
    scanf("%d", &c_day);

    printf("Enter b_month: ");
    scanf("%d", &b_month);

    printf("Enter c_month: ");
    scanf("%d", &c_month);

    printf("Enter b_year: ");
    scanf("%d", &b_year);

    printf("Enter c_year: ");
    scanf("%d", &c_year);

    age = c_year - b_year;
    
    if(c_month > b_month){
        printf("Your age is %d", age);
    }
    else if(c_month < b_month){
        age = c_year - b_year - 1;
        printf("Your age is %d",age);
    }
    else if(c_month = b_month){
        if(c_day > b_day){
            printf("You are %d years old",age);
        }
        else{
            printf("You'll soon be %d",age);
        }
    }

    return 0;

}
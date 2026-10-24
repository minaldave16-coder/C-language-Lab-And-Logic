#include <stdio.h>

int main(){

    int marks1 , marks2 , marks3 , marks4 , marks5;
    int totalMarks;
    int percentage;
    
    printf("Enter marks of subject 1: ");
    scanf("%d", &marks1);

    printf("Enter marks of subject 2: ");
    scanf("%d", &marks2);

    printf("Enter marks of subject 3: ");
    scanf("%d", &marks3);

    printf("Enter marks of subject 4: ");
    scanf("%d", &marks4);

    printf("Enter marks of subject 5: ");
    scanf("%d", &marks5);

    totalMarks = marks1 + marks2 + marks3 + marks4 + marks5;
    printf("Total marks is: %d\n",totalMarks);

    percentage = totalMarks / 5;
    printf("Your percentage is: %d\n",percentage);

    if(percentage > 70){
        printf("You fall in distinction class");
    }
    else if(percentage >= 61 && percentage <= 70){
        printf("You are in first class");
    }
    else if(percentage >= 45 && percentage <= 60){
        printf("You are in second class");
    }
    else{
        printf("You have failed!!!LOL.");
    }

    return 0;

}
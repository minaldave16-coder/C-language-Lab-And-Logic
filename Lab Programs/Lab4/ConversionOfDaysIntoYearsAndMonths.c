#include <stdio.h>

void main(){

    int DD , MM , YY;

    printf("Enter days: ");
    scanf("%d", &DD);

    YY = DD/365;
    DD = DD%365;
    printf("%0d days is equal to %d years\n",DD , YY);

    MM=DD/30;
    DD=DD%30;
    printf("%d days is equal to %d months\n",DD , MM);

    printf("YY:MM:DD is %d:%d:%d",YY , MM , DD);   
    
}
#include <stdio.h>

void main(){

    int SS , MM , HH;

    printf("Enter seconds: ");
    scanf("%d", &SS);

    HH=SS/3600;
    SS=SS%3600;
    printf("%0d seconds is equal to %d hours\n",SS , HH);

    MM=SS/60;
    SS=SS%60;
    printf("%d seconds is equal to %d minutes\n",SS , MM);

    printf("HH:MM:SS is %d:%d:%d",HH,MM,SS);   
    
}
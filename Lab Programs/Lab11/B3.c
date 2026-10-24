#include <stdio.h>

int main(){
    printf("ASCII values are: ");

    for(int i = 0 ; i <= 255 ; i++){
        printf("%d for %c\n",i , i);
    }

    return 0;
}//Doubt: Why is values for 1 - 32 and 255 not showuing..will there be anything asigned to them????
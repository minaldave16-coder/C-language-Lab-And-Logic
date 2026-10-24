#include <stdio.h>
#include <time.h>

int main(){
    time_t t;
    time(&t);   //gets the current time

    printf("Current date and time: %s", ctime(&t));

    return 0;
}
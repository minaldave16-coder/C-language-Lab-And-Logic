#include <stdio.h>

int main(){
    int n = 100;

    for(int n = 100; n <= 200; n++){
        if(n % 7 == 0 && n % 5 != 0 && n % 35 != 0){
            printf("%d\n",n);
        }
    }
    return 0;
}
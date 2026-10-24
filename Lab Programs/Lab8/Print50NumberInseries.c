#include <stdio.h>

int main(){

    int n = -2;
    int i = 0;

    for(int i = 0; i < 50; i++){
        n = n  + 3;
        printf("%d\n", n);
    }
    return 0;
}
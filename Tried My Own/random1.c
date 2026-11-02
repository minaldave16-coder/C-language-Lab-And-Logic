#include <stdio.h>

int main(){

    int n , rem = 0;
    char hex[8];

    printf("Enter n: ");
    scanf("%d",&n);

    while(n > 0){
        rem = n % 16;
        if(rem <= 9 && rem >= 0){
            hex[8] = rem + '0';
        }
        else if(rem <= 15 && rem >= 10){
            hex[8] = rem - 10 + 'A';
        }
        n = n / 16;
    }

    for(int i = 7 ; i >= 0 ; i--){
        printf("%c", hex[i]);
    }

    return 0;
}
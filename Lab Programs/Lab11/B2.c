#include <stdio.h>

int main(){

    int n , j=0 , count = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    int ar[10];
    for(int i = 0 ; i < 10 ; i++){
        ar[i] = 0;
    }

    while(n > 0){
        j = n %10;
        ar[j] = ar[j] + 1;
        n = n / 10;
    }
    for(int i = 0 ; i < 10 ; i++){
        printf("%d - %d\n",i,ar[i]);
    }
    

    return 0;
}
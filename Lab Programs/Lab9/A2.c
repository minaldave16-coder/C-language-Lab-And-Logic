#include <stdio.h>
int main(){

    int n , i = 1 , result;

    printf("Enter n: ");
    scanf("%d", &n);

    while(i <= 10){
       result = n * i;
       printf("%d * %d = %d\n", n , i , result);
       i++;
       
    }

    return 0;
}
#include <stdio.h>
#include <math.h>

int main(){

int n;
int sum = 0;

printf("Enter n: ");
scanf("%d", &n);

for(int i = 1; i <= n; i++){
    if(n % i ==0){
        sum =  sum + i;
    }
}

    printf("The sum of factors is: %d",sum);

return 0;
}
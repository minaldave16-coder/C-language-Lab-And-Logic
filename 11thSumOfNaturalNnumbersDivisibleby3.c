#include <stdio.h>
#include <math.h>

int main(){

int n;
int sum = 0;

printf("Enter n: ");
scanf("%d", &n);

for(int i = 1; i <= n; i++){
    if(i % 3 ==0){
        sum = sum +i;
    }
    i = i + 1;
}

printf("The sum is %d",sum);

return 0;
}
#include <stdio.h>

int main(){

int n;
int fact = 1;

printf("Please enter the number you wanna know the factorial of: ");
scanf("%d", &n);

for(int i = 1 ; i <= n ; i++){
fact = fact * i;
}

printf("Factorial of this number = %d\n",fact);

return 0;
}
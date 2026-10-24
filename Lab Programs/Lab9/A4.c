#include <stdio.h>

int main(){

int n;
int fact = 1;
int i = 1;

printf("Please enter the number you wanna know the factorial of: ");
scanf("%d", &n);

while(i <= n){
fact = fact * i;
}

printf("Factorial of this number = %d\n",fact);

return 0;
}
//Why till 12! only is printed...if we see from 13th factorial the value shown is
//not correct and in 18th and 20th the value is not even positive.

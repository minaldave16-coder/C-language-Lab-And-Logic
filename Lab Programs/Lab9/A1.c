#include <stdio.h>

int main(){

    //Print the sum of 1-2+3-4+5-6+7...n

    int n , i = 1;
    int sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    while(i <= n){
        if(i % 2 == 0){
            sum = sum - i;
        }
        else{
            sum = sum + i;
        }
        i = i + 1;
    }
    printf("The sum of the following series is: %d", sum);

    return 0;
}
//For doing the same thing by for loops:
//use for(int i = 1; i <= n; i++)
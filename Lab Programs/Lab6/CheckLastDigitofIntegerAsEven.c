#include <stdio.h>

int main(){
    
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    if(n % 2 == 0){
        printf("The last digit is even.");
    }
    else{
        printf("The last digit is odd");
    }

    return 0;
}
#include <stdio.h>

int main(){

    int n , count = 0 , flag = 0;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int a[n] , b;

    for(int i = 0 ; i < n ; i++){
        printf("Enter %d : ", i+1);
        scanf("%d", &a[i]);
    }

    printf("Enter the element you want to find: ");
    scanf("%d", &b);

    for(int i = 0 ; i < n ; i++){
        if(a[i] == b){
            flag = 1;
        }
    }

    if(flag == 1){
        printf("The number is present.");
    }
    else{
        printf("The number is not present.");
    }

    return 0;
}
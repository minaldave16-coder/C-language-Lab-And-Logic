#include <stdio.h>

int main(){

    int n , count = 0;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int a[n];

    for(int i = 0 ; i < n ; i++){
        printf("Enter %d : ", i+1);
        scanf("%d", &a[i]);

        if(a[i] < 0){
            count++;
        }
    }

    printf("The number of negative elements in array is: %d",count);

    return 0;
}
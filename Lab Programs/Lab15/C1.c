#include <stdio.h>

int main(){

    int n , max1 , max2;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int a[n];
    for(int i = 0 ; i < n ; i++){
        printf("Enter %d: ", i+1);
        scanf("%d", &a[i]);
    }

        max1 = a[0];
    for(int i = 0 ; i < n ; i++){
        if(max1 < a[i]){
            max1 = a[i];
        }
    }

    max2 = a[0];
    for(int i = 0 ; i < n ; i++){
        if(a[i] < max1 && max2 < a[i]){
            max2 = a[i];
        }
    }
    printf("The largest value is : %d\n", max1);
    printf("The second largest value is : %d", max2);

    return 0;
}
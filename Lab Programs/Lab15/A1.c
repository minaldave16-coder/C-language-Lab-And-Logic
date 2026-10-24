#include <stdio.h>

int main(){

    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int a[n] , b[n];

    for(int i = 0 ; i < n ; i++){
        printf("Enter %d : ", i+1);
        scanf("%d", &a[i]);
    }
    for(int i = 0 ; i < n ; i++){
        b[i] = a[i];
        printf("%d ",b[i]);
    }

    return 0;
}
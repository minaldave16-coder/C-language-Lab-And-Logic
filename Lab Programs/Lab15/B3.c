#include <stdio.h>

int main(){

    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int a[n];

    for(int i = 0; i < n; i++){
        printf("Enter %d : ", i + 1);
        scanf("%d", &a[i]);
    }

    int temp;

    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < i ; j++){
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }

    printf("The reversed array is: \n");

    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }

    return 0;
}
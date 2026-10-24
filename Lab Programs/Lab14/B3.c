#include <stdio.h>

int main(){

    int n , temp;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    int a[n];

    for(int i = 0 ; i < n ; i++){
        printf("Enter entry %d: ", i+1);
        scanf("%d", &a[i]);
    }

    for(int i = 0 ; i < n ; i++){
        for(int j = i + 1 ; j < n ; j++){
            if(a[i] > a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("The numbers are: ");

     for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }

    return 0;
}
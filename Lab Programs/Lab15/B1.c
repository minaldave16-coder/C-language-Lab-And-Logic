#include <stdio.h>

int main(){

    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int a[n];

    for(int i = 0 ; i < n ; i++){
        printf("Enter %d : ", i+1);
        scanf("%d", &a[i]);
    }
    for(int i = 0 ; i < n ; i++){
        for(int j = i + 1 ; j < n ; j++){
            if(a[i] == a[j]){
                a[j] = 0;
            }
        }
    }

    printf("The array after removing the duplicates will be like: \n");

    for(int i = 0 ; i < n ; i++){
        printf("%d ", a[i]);
    }

    return 0;
}
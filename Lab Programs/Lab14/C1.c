#include <stdio.h>

int main(){

    int n , count = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);
    
    int a[n];

    for(int i = 0 ; i < n ; i++){
        printf("Enter value %d: ", i+1);
        scanf("%d", &a[i]);
        for(int j = 0 ; j < i ; j++){
            if(a[i] == a[j]){
                count = count + 1;
                break;
            }
        }
    }

    printf("So total duplicate elements in this array is : %d", count);

    return 0;
}
#include <stdio.h>

int main(){

    int n , m;
    int countP = 0 , countN = 0;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int a[n];

    for(int i = 0 ; i < n ; i++){
        printf("Enter entry %d: ", i+1);
        scanf("%d", &a[i]);
        m = a[i];
        if(m > 0){
            countP++;
        }
        if(m < 0){
            countN++;
        }
    }
    printf("The count of positive numbers is : %d\n", countP);
    printf("The count of negative numbers is : %d", countN);

    return 0;
}
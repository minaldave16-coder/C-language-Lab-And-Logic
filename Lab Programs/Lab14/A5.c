#include <stdio.h>

int main(){
    int n;
    int count;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int a[n] , b[n];

    for(int i = 0 ; i < n ; i++){
        printf("Enter entry %d: ", i+1);
        scanf("%d  %d", &a[i] , &b[i]);
       if(a[i] > 170 && b[i] < 50){
        count++;
       }
    }

    printf("The count of people with height > 170 and weight < 50: %d",count);

    return 0;
}
#include <stdio.h>

int main(){

    int n;
    int sum = 0 , avg = 0 , min , max;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int a[n];

    for(int i = 0 ; i < n ; i++){
        printf("Enter entry %d: ", i+1);
        scanf("%d", &a[i]);
        sum = sum + a[i];
       
    }
    avg = sum / n;
    for(int i = 0 ; i < n ; i++){
    if(a[i] > avg){
        printf("%d ", a[i]);
    }
}
   
    return 0;
}
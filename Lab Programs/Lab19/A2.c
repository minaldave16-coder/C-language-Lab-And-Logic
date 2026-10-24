#include <stdio.h>
void array(int a[] , int size);

int main(){

    int size;
    printf("Enter the size of array: ");
    scanf("%d",&size);
     int a[size];

    for(int i = 0 ; i < size ; i++){
        printf("Enterr element: ");
        scanf("%d", &a[i]);
    }

   array(a , size);
}

void array(int a[] , int size){
    for(int i = 0 ; i < size ; i++){
        printf("%d ",a[i]);
    }
}
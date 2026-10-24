#include <stdio.h>

int main(){

    int marks , roll;
    int a[20][2];

    for(int i = 0 ; i < 20 ; i++){
        for(int j = 0 ; j < 2 ; j++){
            printf("Enter roll no and marks of [%d][%d]", i+1 , j+1);
            scanf("%d %d", &a[i][j]);
        }
    }

    for(int i = 0 ; i < 20 ; i++){
        for(int j = 0 ; j < 2 ; j++){
            printf("%6d",a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
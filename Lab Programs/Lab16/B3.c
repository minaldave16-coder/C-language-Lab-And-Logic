#include <stdio.h>

int main(){

    int m , sum = 0;

    printf("Enter the order of the square matrix: ");
    scanf("%d", &m);

    int a[m][m];

    for(int i = 0 ; i < m ; i++){
        for(int j = 0 ; j < m ; j++){
            printf("Enter element [%d][%d]: ", i+1 , j+1);
            scanf("%d", &a[i][j]);
        }
    }
    for(int i = 0 ; i < m ; i++){
        for(int j = 0 ; j < m ; j++){
            if(i == j){
                printf("%d ", a[i][i]);
                sum = sum + a[i][i];
            }
        }
    }
    printf("\nThe sum is: %d", sum);

    return 0;
}
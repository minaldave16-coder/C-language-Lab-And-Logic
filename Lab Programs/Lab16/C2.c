#include <stdio.h>

int main(){

    int m;
    printf("Enter order of order of square matrix: ");
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
            if(i > j){
                a[i][j] = 0;
            }
        }
    }

    for(int i = 0 ; i < m ; i++){
        for(int j = 0 ; j < m ; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;

}
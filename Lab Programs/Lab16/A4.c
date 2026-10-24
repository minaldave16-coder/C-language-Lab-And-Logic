#include <stdio.h>

int main(){

    int r , c;
    printf("Enter number of rows: ");
    scanf("%d", &r);

    printf("Enter number of columns: ");
    scanf("%d", &c);

    int a[r][c];
    int b[r][c];
    int sum[r][c];

    for(int i = 0 ; i < r ; i++){
        for(int j = 0 ; j < c ; j++){
            printf("Enter element of matrix1 [%d][%d]: ", i+1 , j+1);
            scanf("%d", &a[i][j]);
        }
    }

    for(int i = 0 ; i < r ; i++){
        for(int j = 0 ; j < c ; j++){
            printf("Enter element of matrix2 [%d][%d]: ", i+1 , j+1);
            scanf("%d", &b[i][j]);
        }
    }

    for(int i = 0 ; i < r ; i++){
        for(int j = 0 ; j < c ; j++){
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    for(int i = 0 ; i < r ; i++){
        for(int j = 0 ; j < c ; j++){
            printf("%3d", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
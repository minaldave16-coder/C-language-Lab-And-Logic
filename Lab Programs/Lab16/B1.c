#include <stdio.h>

int main(){

    int r , c;
    printf("Enter number of rows: ");
    scanf("%d", &r);

    printf("Enter number of columns: ");
    scanf("%d", &c);

    int a[r][c];

    for(int i = 0 ; i < r ; i++){
        for(int j = 0; j < c ; j++){
            printf("Enter element [%d][%d]: ", i+1 , j+1);
            scanf("%d", &a[i][j]);
        }
    }

    for(int i = 0 ; i < c ; i++){
        for(int j = 0 ; j < r ; j++){
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }

    return 0;
}
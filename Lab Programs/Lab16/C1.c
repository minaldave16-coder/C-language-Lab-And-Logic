#include <stdio.h>

int main(){

    int r , c , count0 = 0 , countNonZero = 0;

    printf("Enter number of rows: ");
    scanf("%d", &r);

    printf("Enter number of columns: ");
    scanf("%d", &c);

    int a[r][c];

    for(int i = 0 ; i < r ; i++){
        for(int j = 0 ; j < c ; j++){
            printf("enter element [%d][%d]: ", i+1 , j+1);
            scanf("%d", &a[i][j]);
        }
    }

    for(int i = 0 ; i < r ; i++){
        for(int j = 0 ; j < c ; j++){
            if(a[i][j] == 0){
                count0++;
            }
            else{
                countNonZero++;
            }
        }
    }

    if(count0 > countNonZero){
        printf("It is a sparse matrix.");
    }
    else{
        printf("It is not a sparse matrix.");
    }

    return 0;
}